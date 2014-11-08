void open_fm_option(UINT8 ChipType, UINT8 OptType, UINT32 OptVal);
void opl_chip_reset(void);
void open_real_fm(void);
void reset_real_fm(void);
void setup_real_fm(UINT8 ChipType, UINT8 ChipID);
void close_real_fm(void);
void chip_reg_write(UINT8 ChipType, UINT8 ChipID, UINT8 Port, UINT8 Offset, UINT8 Data);
void OPL_Hardware_Detecton(void);
void OPL_HW_WriteReg(UINT16 Reg, UINT8 Data);
void OPL_RegMapper(UINT16 Reg, UINT8 Data);
void RefreshVolume(void);
void StartSkipping(void);
void StopSkipping(void);
void ym2413opl_set_emu_core(UINT8 Emulator);

#ifndef WIN32
void Sleep(UINT32 msec);
#endif
