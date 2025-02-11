#pragma once
#define PROJ_XY2_PRO       11 //255-255-240
#define PROJ_XY3_PRO       12 //!pb 300-300-400
#define PROJ_XY3_PRO_V2    13 //nh 300-300-400
#define PROJ_X5SA          14 //g:corexy 330-330-400
#define PROJ_XY3SE         15 //255-255-260
#define PROJ_D01_PLUS      16 //T:corexy 330-330-400
#define PROJ_X5SA_2E       17 //corexy 330-330-400
#define PROJ_XY3SE_2E      18 //laser,TB 255-255-260
#define PROJ_XY2_PRO_2E    20 //255-255-260
#define PROJ_X5SA_PRO      21 //corexy 330-330-400
#define PROJ_X5SA400_PRO   22 //400/400pro:corexy 400-400-400
#define PROJ_X5SA400_2E    23 //corexy 400-400-400
#define PROJ_XY3SE_V2      24 //255-255-260
#define PROJ_D01           25 //T:corexy !pb 220-220-220
#define PROJ_C2            27 //g 160-160-170 no probe & auto level
#define PROJ_XY3_PROPB     31 //300-300-400
#define PROJ_X5SA_g        40 //*g:F103 220-220-220 no probe & auto level

#define UI_MARLIN_DEFAULT  0
#define UI_PIC480X320      1

#define TRONXY_PROJ        PROJ_XY2_PRO
#define TRONXY_UI          UI_PIC480X320 // UI_PIC480X320 or UI_MARLIN_DEFAULT

#if TRONXY_UI > 0
#define HAS_TRONXY_UI      1
#endif
#if TRONXY_PROJ
#define HAS_TRONXY_PROJ    1
#endif

#if TRONXY_PROJ == PROJ_XY2_PRO

#define TRONXY_MACHINE_NAME       "XY2-PRO"
#define TRONXY_BACKUP_POWER       1 //Função UPS, observe que certos pinos são necessários para detecção de falha de energia e configure a função de interrupção correspondente.
#define TRONXY_SCREEN_SHUTDOWN    1 //Função de desligamento de tela
#define TRONXY_HOME_XY_ONLY       0 //A redefinição manual da interface de depuração é apenas redefinição XY? Nesse caso, o botão de redefinição Z é ativado, caso contrário, é inválido.
#define WIFI_INTERFACE            1 //Função WIFI
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifiTerminal para controle laser PWM
#define DUAL_ZMAX_HOME            0 //Redefinição da extremidade grande, redefinição na direção oposta e, em seguida, retornar à direção direta para encontrar o ponto 0
#define Z_BED_MOVE                0 //Z Movimento do eixo: cama aquecida
#define EXTRUDERS                 1 //Número de extrusoras
#define INVERT_E0_DIR             false //TITAN:true general:false
#define USE_EXTRUDER              4 //T,g TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY3_PRO

#define TRONXY_MACHINE_NAME       "XY3-PRO"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY3_PRO_V2

#define TRONXY_MACHINE_NAME       "XY3-PRO-V2"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //BMG:true
#define USE_EXTRUDER              2 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_X5SA

#define TRONXY_MACHINE_NAME       "X5SA"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             false //general:false,BMG:true
#define USE_EXTRUDER              2 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY3SE

#define TRONXY_MACHINE_NAME       "XY3SE"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true;BMG:false
#define USE_EXTRUDER              1 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_D01_PLUS

#define TRONXY_MACHINE_NAME       "D01-PLUS"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true;BMG:false
#define USE_EXTRUDER              1 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_X5SA_2E

#define TRONXY_MACHINE_NAME       "X5SA-2E"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true,true
#define INVERT_E1_DIR             true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY3SE_2E

#define TRONXY_MACHINE_NAME       "XY3SE-2E"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true,true;BMG:false,true
#define INVERT_E1_DIR             true
#define USE_EXTRUDER              1 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY2_PRO_2E

#define TRONXY_MACHINE_NAME       "XY2-PRO-2E"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 2 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true,true
#define INVERT_E1_DIR             true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_X5SA_PRO

#define TRONXY_MACHINE_NAME       "X5SA-PRO"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true;BMG:false
#define USE_EXTRUDER              1 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_X5SA400_PRO

#define TRONXY_MACHINE_NAME       "X5SA400"
// #define TRONXY_MACHINE_NAME       "X5SA400-PRO"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_X5SA400_2E

#define TRONXY_MACHINE_NAME       "X5SA400-2E"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true,true
#define INVERT_E1_DIR             true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY3SE_V2

#define TRONXY_MACHINE_NAME       "XY3SE-V2"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true;BMG:false
#define USE_EXTRUDER              1 //T,B TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_D01

#define TRONXY_MACHINE_NAME       "D01"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_C2

#define TRONXY_MACHINE_NAME       "C2"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             false //general:false
#define USE_EXTRUDER              4 //TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_XY3_PROPB

#define TRONXY_MACHINE_NAME       "XY3-PRO-PB"
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              0 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                0 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             true //TITAN:true
#define USE_EXTRUDER              1 //TITAN:1,BMG:2,TAOLI:3,general:4
#define FIX_MOUNTED_PROBE

#elif TRONXY_PROJ == PROJ_X5SA_g

#define TRONXY_MACHINE_NAME       "X5SA-220" //DEF->220
#define TRONXY_BACKUP_POWER       0 //UPS功能,注意需要某些特定脚作断电检测,配置相应的中断函数
#define TRONXY_SCREEN_SHUTDOWN    1 //熄屏功能
#define TRONXY_HOME_XY_ONLY       0 //手动调试界面复位是否只有XY复位,如果是,则Z复位按钮激活,否则失效
#define WIFI_INTERFACE            0 //WIFI功能
#define TAOLI_SERIAL              0
#define LASER_SERIAL              1 //wifi端子用于激光PWM控制
#define DUAL_ZMAX_HOME            0 //大端复位,向反方向复位,再回到正方向找0点
#define Z_BED_MOVE                1 //Z轴移动:热床
#define EXTRUDERS                 1 //挤出机数量
#define INVERT_E0_DIR             false //general:false
#define USE_EXTRUDER              4 //TITAN:1,BMG:2,TAOLI:3,general:4
// #define FIX_MOUNTED_PROBE

#else

#error "You haven't configure this machine."

#endif
