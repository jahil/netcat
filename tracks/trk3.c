#include "../netcat.h"
#define NETCAT_CPI_TRK3_LEN 7152046
struct netcat_track netcat_cpi_trk3 = {
	.name = "Sad Jalwa Roo Baroo",
	.len  = NETCAT_CPI_TRK3_LEN,
	.data = {
#include "trk3data.h"
	}
};
