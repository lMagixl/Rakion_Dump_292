
void __fastcall FUN_3607a2a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  
  switch(param_2) {
  case 10:
  case 0x6e:
    *param_1 = 0x2600;
    *in_EAX = 0x2600;
    return;
  case 0xb:
  case 0x6f:
    *param_1 = 0x2600;
    *in_EAX = 0x2700;
    return;
  case 0xc:
  case 0x70:
    *param_1 = 0x2600;
    *in_EAX = 0x2702;
    return;
  case 0x14:
  case 0xdc:
    *param_1 = 0x2601;
    *in_EAX = 0x2601;
    return;
  case 0x15:
  case 0xdd:
    *param_1 = 0x2601;
    *in_EAX = 0x2701;
    return;
  case 0x16:
  case 0xde:
    *param_1 = 0x2601;
    *in_EAX = 0x2703;
    return;
  case 0x78:
    *param_1 = 0x2600;
    *in_EAX = 0x2601;
    return;
  case 0x79:
    *param_1 = 0x2600;
    *in_EAX = 0x2701;
    return;
  case 0x7a:
    *param_1 = 0x2600;
    *in_EAX = 0x2703;
    return;
  case 0xd2:
    *param_1 = 0x2601;
    *in_EAX = 0x2600;
    return;
  case 0xd3:
    *param_1 = 0x2601;
    *in_EAX = 0x2700;
    return;
  case 0xd4:
    *param_1 = 0x2601;
    *in_EAX = 0x2702;
  }
  return;
}

