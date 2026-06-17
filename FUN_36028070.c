
void FUN_36028070(void)

{
  if (DAT_362ba340 != (HANDLE)0x0) {
    SetCommMask(DAT_362ba340,0);
    EscapeCommFunction(DAT_362ba340,6);
    EscapeCommFunction(DAT_362ba340,4);
    PurgeComm(DAT_362ba340,0xf);
    if (DAT_362a1b8c != DAT_362ba320) {
      CloseHandle(DAT_362ba340);
      DAT_362ba340 = (HANDLE)0x0;
    }
    DAT_362a1b88 = 1;
  }
  return;
}

