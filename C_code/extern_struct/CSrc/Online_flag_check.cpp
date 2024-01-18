// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN Global_Definitions 
#include "online_check_library.h"

TCSDO_003_2 CSDO_003_2;
TSSDO_003_2 SSDO_003_2;

bool test_result;
// CODE BLOCK END Global_Definitions 

// CODE BLOCK BEGIN On_Stop NewOn_Stop1
// On stop handler "NewOn_Stop1"
void on_stop_NewOn_Stop1(void) { __try { // on stop event
app.terminate_application();

} __except (1) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Stop NewOn_Stop1

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { __try { // interval = 5 ms
// Проверка правильности переключения флага CAN_MON_STEERING_FRONT_ONLINE в CanOpen КВУ
test_log("====================================================================");
test_log("NEW TEST: SDO - мониторинг устройства в сети");

com.can_rbs_start(); 

 CSDO_003_2.init();
 SSDO_003_2.init();   

online_check
bool test_2 = offline_check();   
bool test_3 = online_check();
test_result = (test_1 &&
              test_2 &&
              test_3);      

 

// Ругаемся в основной форме, если какой-либо из тестов не прошел  
if (test_result) {
   test_log("TEST_RESULT: OK");
   test.set_verdict_ok("TEST_RESULT: OK");
   }
else {
   test_log("TEST_RESULT: FAILED");  
   test.set_verdict_nok("TEST_RESULT: FAILED");
   }

  
app.terminate_application();

} __except (1) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

