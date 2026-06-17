
void __fastcall FUN_3601f640(CSerial *param_1)

{
  if (param_1 != (CSerial *)0x0) {
    CSerial::MarkUsed(param_1);
    return;
  }
  return;
}

