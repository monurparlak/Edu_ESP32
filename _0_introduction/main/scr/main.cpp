/*//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
**C:\Espressif\frameworks\esp-idf-v5.0>dir
**C:\Espressif\frameworks\esp-idf-v5.0>install.bat
**C:\Espressif\frameworks\esp-idf-v5.0>export.bat
**..\$YOUR_PROJECT>idf.py set-target esp32
**..\$YOUR_PROJECT>idf.py menuconfig
**..\$YOUR_PROJECT>idf.py build
**..\$YOUR_PROJECT>idf.py -p COMX flash or idf.py flash
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
  
#ifdef __cplusplus
}
#endif
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////*/
#include <utility>
#include <cstdint>
#include <cstddef>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"

#include "esp_system.h"
#include "esp_log.h"
#include "esp_err.h"
#include <sys/unistd.h>
#include <sys/stat.h>

#ifdef __cplusplus
extern "C" {
#endif

void app_main(void) {

	while (true) {

	printf("Hello world!\n");
	vTaskDelay(1000 / portTICK_PERIOD_MS);

	}
}
#ifdef __cplusplus
}
#endif
