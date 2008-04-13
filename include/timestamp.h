#ifndef TIMESTAMP_H
#define TIMESTAMP_H

struct timestamp {
	unsigned long		event;
	unsigned long long	timestamp;
	unsigned int		seq_no;
	int			cpu;
};

int  str2event(const char* str, unsigned long *id);
const char* event2str(unsigned long id);

#define ENABLE_CMD 0L

#define TIMESTAMP(id) id

#define TS_SCHED_START 			TIMESTAMP(100)
#define TS_SCHED_END			TIMESTAMP(101)
#define TS_CXS_START			TIMESTAMP(102)
#define TS_CXS_END			TIMESTAMP(103)

#define TS_TICK_START  			TIMESTAMP(110)
#define TS_TICK_END    			TIMESTAMP(111)

#define TS_PLUGIN_SCHED_START		TIMESTAMP(120)
#define TS_PLUGIN_SCHED_END		TIMESTAMP(121)

#define TS_PLUGIN_TICK_START		TIMESTAMP(130)
#define TS_PLUGIN_TICK_END		TIMESTAMP(131)

#define TS_ENTER_NP_START		TIMESTAMP(140)
#define TS_ENTER_NP_END			TIMESTAMP(141)

#define TS_EXIT_NP_START		TIMESTAMP(150)
#define TS_EXIT_NP_END			TIMESTAMP(151)

#define TS_SRP_UP_START			TIMESTAMP(160)
#define TS_SRP_UP_END			TIMESTAMP(161)
#define TS_SRP_DOWN_START		TIMESTAMP(162)
#define TS_SRP_DOWN_END			TIMESTAMP(163)

#define TS_PI_UP_START			TIMESTAMP(170)
#define TS_PI_UP_END			TIMESTAMP(171)
#define TS_PI_DOWN_START		TIMESTAMP(172)
#define TS_PI_DOWN_END			TIMESTAMP(173)

#define TS_FIFO_UP_START		TIMESTAMP(180)
#define TS_FIFO_UP_END			TIMESTAMP(181)
#define TS_FIFO_DOWN_START		TIMESTAMP(182)
#define TS_FIFO_DOWN_END		TIMESTAMP(183)

#define PCP1	200
#define PCP2	204

#define DPCP	210
#define MPCP	220
#define FMLP	230
#define SRPT	240

#define TS_PCP_UP_START			TIMESTAMP(PCP1)
#define TS_PCP_UP_END			TIMESTAMP(PCP1 + 1)
#define TS_PCP1_DOWN_START		TIMESTAMP(PCP1 + 2)
#define TS_PCP1_DOWN_END		TIMESTAMP(PCP1 + 3)
#define TS_PCP2_DOWN_START		TIMESTAMP(PCP2 + 2)

#define TS_PCP2_DOWN_END		TIMESTAMP(PCP2 + 3)

#define TS_DPCP_INVOKE_START		TIMESTAMP(DPCP)
#define TS_DPCP_INVOKE_END		TIMESTAMP(DPCP + 1)
#define TS_DPCP_AGENT1_START		TIMESTAMP(DPCP + 2)
#define TS_DPCP_AGENT1_END		TIMESTAMP(DPCP + 3)
#define TS_DPCP_AGENT2_START		TIMESTAMP(DPCP + 4)
#define TS_DPCP_AGENT2_END		TIMESTAMP(DPCP + 5)

#define TS_MPCP_UP_START		TIMESTAMP(MPCP)
#define TS_MPCP_UP_END			TIMESTAMP(MPCP + 1)
#define TS_MPCP_DOWN_START		TIMESTAMP(MPCP + 2)
#define TS_MPCP_DOWN_END		TIMESTAMP(MPCP + 3)


#define TS_SRPT_START			TIMESTAMP(SRPT)
#define TS_SRPT_END			TIMESTAMP(SRPT + 1)



#endif
