#ifndef _LANGUAGE_SL_H_
#define _LANGUAGE_SL_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "Emulated M600"
    #define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "Obrni UI"
    #define STRING_LANGUAGE               "Slovenski"
    #define STRING_ACK_NOTIFICATION       "ACK notification style"
    #define STRING_FILES_SORT_BY          "Sort files by"
    #define STRING_FILES_LIST_MODE        "Prikaz datotek v seznamu"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Fan Speed As Percentage"
    #define STRING_PERSISTENT_INFO        "Stalno prikazuj status"
    #define STRING_TERMINAL_ACK           "Pokaži ACK v terminalu"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_SHOW_BOOTSCREEN        "Show Bootscreen"
    #define STRING_ALERT_HEATERS_ON       "Alert that heaters are still on" 
    #define STRING_MARLIN_FULLSCREEN      "Marlin čez cel zaslon"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "Hitr. pomika (X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_AUTO_SHUTDOWN       "Samodejni izklop"
    #define STRING_FIL_RUNOUT             "Senzor filamenta"
    #define STRING_PL_RECOVERY            "Power loss recovery"
    #define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Touch sounds"
    #define STRING_TOAST_SOUND            "Toast Notifications"
    #define STRING_ALERT_SOUND            "Popups and Alerts"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_LCD_BRIGHTNESS         "Svetilnost"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Zatemnitev LCD"
    #define STRING_LCD_IDLE_TIME          "Zatemnitev po času"
    #define STRING_LCD_LOCK_ON_IDLE       "LCD lock on idle"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "LED enkoder gumba"
    #define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
    #define STRING_START_GCODE_ENABLED    "Zaženi startno G-kodo"
    #define STRING_END_GCODE_ENABLED      "Zaženi končno G-kodo"
    #define STRING_CANCEL_GCODE_ENABLED   "Zaženi G-kodo preklica"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Št. korakov na MM"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_MAXACCELERATION        "Max pospešek"
    #define STRING_MAXFEEDRATE            "Max hitr. dovajanja fil."
    #define STRING_ACCELERATION           "Pospešek"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_DIAGONAL_ROD     "Diagonal Rod Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Odmik sonde"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Tok driverja mot. (mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_BUMP_SENSITIVITY       "TMC občutljivost trka"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Pospešek tiska"
    #define STRING_RETRACT_ACCELERATION   "Pospešek privleka fil."
    #define STRING_TRAVEL_ACCELERATION    "Pospešek pomika"
    #define STRING_RETRACT_LENGTH         "Retract length"
    #define STRING_RETRACT_SWAP_LENGTH    "Retract swap length"
    #define STRING_RETRACT_FEEDRATE       "Retract feedrate"
    #define STRING_RETRACT_Z_LIFT         "Z lift on retraction"
    #define STRING_RECOVER_LENGTH         "Extra recover length"
    #define STRING_SWAP_RECOVER_LENGTH    "Extra recover swap length"
    #define STRING_RECOVER_FEEDRATE       "Recover feedrate"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Swap recover feedrate"

    // Save / Load
    #define STRING_SAVE                   "Shrani"
    #define STRING_RESTORE                "Restore"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Shrani nastavitve tiskalnika v EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Naloži nastavitve iz EEPROM-a?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
    #define STRING_SETTINGS_SAVE          "Save settings"
    #define STRING_SETTINGS_RESTORE       "Obnovi nastavitve"
    #define STRING_SETTINGS_RESET         "Reset nastavitev"
    #define STRING_SETTINGS_RESET_INFO    "Reset vseh nastavitev na privzete vrednosti?"
    #define STRING_SETTINGS_RESET_DONE    "Reset vseh nastavitev uspešna.\nPonovno zaženi napravo."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Stran gor"
    #define STRING_PAGE_DOWN              "Stran dol"
    #define STRING_UP                     "Up"
    #define STRING_DOWN                   "Down"
    #define STRING_NEXT                   "Next"
    #define STRING_BACK                   "Nazaj"

    // Value Buttons
    #define STRING_INC                    "Več"
    #define STRING_DEC                    "Manj"
    #define STRING_LOAD                   "Naloži"
    #define STRING_UNLOAD                 "Izvrzi"
    #define STRING_ON                     "ON"
    #define STRING_OFF                    "OFF"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Počasi"
    #define STRING_NORMAL                 "Normalo"
    #define STRING_FAST                   "Hitro"
    #define STRING_ZERO                   "Nič"
    #define STRING_HALF                   "50% moč"
    #define STRING_FULL                   "100% moč"
    #define STRING_CUSTOM                 "Po meri"
    #define STRING_CLEAR                  "Clear"
    #define STRING_DEFAULT                "Default"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "Stop"
    #define STRING_PAUSE                  "Pavza"
    #define STRING_RESUME                 "Nadaljuj"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Odklopi"
    #define STRING_SHUT_DOWN              "Izklop"
    #define STRING_FORCE_SHUT_DOWN        "Prisilni izklop"
    #define STRING_EMERGENCYSTOP          "EM. STOP"
    #define STRING_PREHEAT                "Predgretje"
    #define STRING_PREHEAT_BOTH           "Oboje"
    #define STRING_COOLDOWN               "Ohlajanje"

    // Dialog Buttons
    #define STRING_CONFIRM                "\u088E OK" //Confirm Sign
    #define STRING_CANCEL                 "\u088F Prekliči" //Cancel Sign
    #define STRING_WARNING                "Opozorilo" //Exclamation Sign
    #define STRING_CONTINUE               "Nadaljuj"
    #define STRING_CONFIRMATION           "Are you sure?"

    // Process Status
    #define STRING_STATUS                 "Info"
    #define STRING_READY                  "Pripravljen"
    #define STRING_BUSY                   "Zaseden s procesiranjem, prosim počakaj..."
    #define STRING_LOADING                "Nalagam..."
    #define STRING_UNCONNECTED            "Nobenega tiskalnika priključenega!"
    #define STRING_LISTENING              "TFT in Listening Mode!"

    // Process Info
    #define STRING_INFO                   "Info" //Info Sign
    #define STRING_INVALID_VALUE          "Invalid value(s)"
    #define STRING_TIMEOUT_REACHED        "Timeout reached!"
    #define STRING_DISCONNECT_INFO        "Zdaj lahko upravljaš tiskalnik z računalnikom!"
    #define STRING_SHUTTING_DOWN          "Ugašam..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Čakam, da se šoba ohladi pod %d°C"
    #define STRING_POWER_FAILED           "Nadaljuj s tiskanjem?" //Question Sign
    #define STRING_PROCESS_RUNNING        "Process already running!"
    #define STRING_PROCESS_COMPLETED      "Process completed!"
    #define STRING_PROCESS_ABORTED        "Process aborted!"

    // TFT SD, USB Disk, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "TFT SD"
    #define STRING_READ_TFTSD_ERROR       "Napaka branja TFT SD kartice!"
    #define STRING_TFTSD_INSERTED         "Kartica vstavljena!"
    #define STRING_TFTSD_REMOVED          "Kartica odstranjena!"
    #define STRING_TFTSD_NOT_DETECTED     "No SD Card detected."
    #define STRING_USB_DISK               "USB disk"
    #define STRING_READ_USB_DISK_ERROR    "Napaka branja USB diska!"
    #define STRING_USB_DISK_INSERTED      "USB disk vstavljen!"
    #define STRING_USB_DISK_REMOVED       "USB disk odstranjen!"
    #define STRING_USB_DISK_NOT_DETECTED  "No USB Disk detected."
    #define STRING_ONBOARDSD              "SKR SD"
    #define STRING_ONBOARDUSB             "SKR USB"
    #define STRING_READ_ONBOARDSD_ERROR   "Napaka branja SKR media!"
    #define STRING_FILAMENT_RUNOUT        "Ni več filamenta!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Disarm All"
    #define STRING_XY_UNLOCK              "Disarm XY"

    #define STRING_START_PRINT            "Start tiska:\n%s?"
    #define STRING_STOP_PRINT             "Ustavim tisk?"
    #define STRING_IS_PAUSE               "Ne morem estrudirat med tiskanjem.\nPavziram tisk?"
    #define STRING_M0_PAUSE               "Pavza (M0 ukaz)"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Postavi"
    #define STRING_STOW                   "Skrij"
    #define STRING_REPEAT                 "Ponovi"
    #define STRING_HS_ON                  "HS: On"
    #define STRING_HS_OFF                 "HS: Off"

    // Printer Tools
    #define STRING_NOZZLE                 "Šoba"
    #define STRING_BED                    "Miza"
    #define STRING_CHAMBER                "Chamber"
    #define STRING_FAN                    "Hlajenje"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 sek."
    #define STRING_10_SECONDS             "10 sek."
    #define STRING_30_SECONDS             "30 sek."
    #define STRING_60_SECONDS             "1 min."
    #define STRING_120_SECONDS            "2 min."
    #define STRING_300_SECONDS            "5 min."

    // Colors
    #define STRING_WHITE                  "Belo"
    #define STRING_BLACK                  "Črno"
    #define STRING_BLUE                   "Mordo"
    #define STRING_RED                    "Rdeče"
    #define STRING_GREEN                  "Zeleno"
    #define STRING_CYAN                   "Modrozelena"
    #define STRING_YELLOW                 "Rumena"
    #define STRING_BROWN                  "Rjana"
    #define STRING_GRAY                   "Siva"
    #define STRING_ORANGE                 "Oranžna"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Vijolična"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Temno vijolična"
    #define STRING_LIME                   "Limeta"
    #define STRING_DARKBLUE               "Temno morda"
    #define STRING_DARKGREEN              "Temno zelena"
    #define STRING_DARKGRAY               "Temno siva"

    // Menus
    #define STRING_HEAT                   "Gretje"
    #define STRING_MOVE                   "Pomik"
    #define STRING_HOME                   "Domov"
    #define STRING_PRINT                  "Tisk"
    #define STRING_EXTRUDE                "Filament"
    #define STRING_SETTINGS               "Nastavitve"
    #define STRING_SCREEN_SETTINGS        "Zaslon"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Sound"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Naprava"
    #define STRING_PARAMETER_SETTINGS     "Parametri"
    #define STRING_FEATURE_SETTINGS       "Funkcije"
    #define STRING_CONNECTION_SETTINGS    "Connection"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "Baud hitr."
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "Barva LED"
    #define STRING_RGB_OFF                "LED Off"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Niveliraj"
    #define STRING_POINT_1                "Točka 1"
    #define STRING_POINT_2                "Točka 2"
    #define STRING_POINT_3                "Točka 3"
    #define STRING_POINT_4                "Točka 4"
    #define STRING_POINT_5                "Točka 5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Bed Leveling Complete"
    #define STRING_BL_SMART_FILL          "Missing probe points have been smart filled.\n\nNote: remember to save!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Save the mesh to EEPROM to load after reboot?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_P_OFFSET               "P odmik"
    #define STRING_H_OFFSET               "H odmik"
    #define STRING_DISTANCE               "Distance"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "Umeri"
    #define STRING_MORE                   "Več"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_BG_COLOR               "Barva ozadja"
    #define STRING_FONT_COLOR             "Barva pisave"
    #define STRING_PERCENTAGE             "Procent"
    #define STRING_PERCENTAGE_SPEED       "Hitrost"
    #define STRING_PERCENTAGE_FLOW        "Pretok"
    #define STRING_BABYSTEP               "BabyStep"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Kalibracija zaslona na dotik"
    #define STRING_ADJUST_INFO            "Pritisni na rdečo piko"
    #define STRING_ADJUST_OK              "Nastavitev uspešna"
    #define STRING_ADJUST_FAILED          "Nastavitev neuspešna, prosim poskusi ponovno"
    #define STRING_UNIFIEDMOVE            "Vodenje"
    #define STRING_UNIFIEDHEAT            "Gretje"
    #define STRING_TOUCH_TO_EXIT          "Klikni kjerkoli za izhod"
    #define STRING_MAINMENU               "Meni"
    #define STRING_LEVELING_EDGE_DISTANCE "Bed edge distance"
    #define STRING_TUNING                 "Tuning"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autotune"
    #define STRING_PID_START_INFO         "PID autotune may take some time to complete.\nContinue?"
    #define STRING_PID_START_INFO_2       "PID autotune in progress!"
    #define STRING_PID_START_INFO_3       "Do not touch the screen until completed (green LED ON)!"
    #define STRING_TUNE_EXTRUDER          "Tune steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
    #define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your fillament.\nPress '%s' when ready.\nMeasure remaining length after extruding."
    #define STRING_TUNE_EXT_HEATOFF       "Turn the heater off?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps applied.\nDon't forget to save it in EEPROM.\nNew value: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Length remaining:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
    #define STRING_NOTIFICATIONS          "Notifications"
    #define STRING_MESH_EDITOR            "Mesh edit"
    #define STRING_MESH_TUNER             "Mesh tuner"
    #define STRING_CASE_LIGHT             "Case light"
    #define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process to complete."  // translation needed
    #define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process to complete."  // translation needed
    #define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
    #define STRING_PRINT_FINISHED         "   Print\n   finished"
    #define STRING_MAIN_SCREEN            "Main"
    #define STRING_PREVIOUS_PRINT_DATA    "Brief"
    #define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
    #define STRING_CLICK_FOR_MORE         "Click for summary"
    #define STRING_EXT_TEMPLOW            "Hotend temperature is below minimum temperature (%d℃)."
    #define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "Macros"
    #define STRING_MESH_VALID             "Mesh Validation"
    #define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
    #define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
    #define STRING_CALIBRATION            "Calibrate"

#endif
