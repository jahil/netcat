#include "../netcat.h"
#define NETCAT_CPI_TRK2_LEN 3392625
struct netcat_track netcat_cpi_trk2 = {
	.name = "Zikr Us Pariwash Ka",
	.len  = NETCAT_CPI_TRK2_LEN,
	.data = {
#include "trk2data.h"
	}
};
