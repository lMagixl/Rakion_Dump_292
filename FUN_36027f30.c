
void __fastcall FUN_36027f30(CTString *param_1)

{
  int unaff_ESI;
  LPCSTR local_2c;
  _DCB local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f468;
  local_c = ExceptionList;
  if (unaff_ESI != 0) {
    ExceptionList = &local_c;
    CTString::CTString(param_1,(long)&local_2c,(char *)0x0,s_COM_d_36224ad4);
    if ((DAT_362ba340 == (HANDLE)0x0) &&
       (DAT_362ba340 = CreateFileA(local_2c,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                   (HANDLE)0x0), DAT_362ba340 == (HANDLE)0xffffffff)) {
      GetLastError();
      DAT_362ba340 = (HANDLE)0x0;
    }
    else {
      SetupComm(DAT_362ba340,0x100,0x100);
      PurgeComm(DAT_362ba340,0xf);
      local_28.DCBlength = 0x1c;
      GetCommState(DAT_362ba340,&local_28);
      local_28._8_4_ = local_28._8_4_ & 0xffffdfdf | 0x1013;
      local_28.BaudRate = 0x4b0;
      local_28.ByteSize = '\a';
      local_28.Parity = '\0';
      local_28.StopBits = '\0';
      SetCommState(DAT_362ba340,&local_28);
      DAT_362ba344 = 0;
      DAT_362ba348._3_1_ = 0;
      DAT_362ba348._2_1_ = 0;
      DAT_362ba348._1_1_ = 0;
      DAT_362ba348._0_1_ = 0;
      DAT_362a1b88 = 1;
      DAT_362a1b8c = unaff_ESI;
    }
    local_4 = 0xffffffff;
    StringFree(local_2c);
    ExceptionList = local_c;
    return;
  }
  return;
}

