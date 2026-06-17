
void __cdecl
FUN_36075eb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  switch(param_1) {
  case 10:
  case 0x6e:
    *param_2 = 1;
    break;
  case 0xb:
  case 0x6f:
    *param_2 = 1;
    goto LAB_36075fca;
  case 0xc:
  case 0x70:
    *param_2 = 1;
    *param_3 = 1;
    *param_4 = 2;
    return;
  default:
    return;
  case 0x14:
  case 0xdc:
    *param_2 = 2;
    goto LAB_36075f4e;
  case 0x15:
  case 0xdd:
    *param_2 = 2;
    goto LAB_36075f6d;
  case 0x16:
  case 0xde:
    *param_2 = 2;
    *param_3 = 2;
    *param_4 = 2;
    return;
  case 0x78:
    *param_2 = 1;
LAB_36075f4e:
    *param_3 = 2;
    *param_4 = 0;
    return;
  case 0x79:
    *param_2 = 1;
LAB_36075f6d:
    *param_3 = 2;
    *param_4 = 1;
    return;
  case 0x7a:
    *param_2 = 1;
    *param_3 = 2;
    *param_4 = 2;
    return;
  case 0xd2:
    *param_2 = 2;
    break;
  case 0xd3:
    *param_2 = 2;
LAB_36075fca:
    *param_3 = 1;
    *param_4 = 1;
    return;
  case 0xd4:
    *param_2 = 2;
    *param_3 = 1;
    *param_4 = 2;
    return;
  }
  *param_3 = 1;
  *param_4 = 0;
  return;
}

