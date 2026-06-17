
void FUN_3608d5c0(void)

{
  char *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_362127ba;
  local_10 = ExceptionList;
  if (DAT_362c5468 != 0) {
    ExceptionList = &local_10;
    pcVar1 = Translate(s_ETRSMultimonitor_support_was_dis_3622e05c,4);
    CPrintF(pcVar1);
    pcVar1 = Translate(s_ETRS_re_enabling_multimonitor____3622e084,4);
    CPrintF(pcVar1);
    local_8 = 0;
    FUN_3608d230(0);
    pcVar1 = Translate(s_ETRS_enabled_3622e0a8,4);
    CPrintF(pcVar1);
  }
  ExceptionList = local_10;
  return;
}

