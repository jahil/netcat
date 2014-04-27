#include "../netcat.h"
#define NETCAT_CPI_TRK1_LEN 6409107
struct netcat_track netcat_cpi_trk1 = {
	.name = "Ishq Main Ji Ko",
	.len  = NETCAT_CPI_TRK1_LEN,
	.data = {
#include "trk1data.h"
	}
};
