
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36075ab0(int param_1)

{
  if (DAT_362a40c8 == 0) {
    DAT_362c3cf8 = (code *)0x0;
    _DAT_362c3cf4 = (code *)0x0;
    DAT_362a3f78 = 0x499602d2;
    return;
  }
  if (DAT_362a3f78 != param_1) {
    switch(param_1) {
    case 0x15:
      DAT_362c3cfc = 0;
      _DAT_362c3cf4 = FUN_36075250;
      DAT_362c3cf8 = FUN_36075010;
      DAT_362a3f78 = param_1;
      return;
    case 0x16:
      DAT_362c3cfc = 0xff000000;
      _DAT_362c3cf4 = FUN_36075250;
      DAT_362c3cf8 = FUN_36075010;
      DAT_362a3f78 = param_1;
      return;
    case 0x17:
      DAT_362c3cfc = 0;
      _DAT_362c3cf4 = FUN_36075740;
      DAT_362c3cf8 = FUN_36075150;
      DAT_362a3f78 = param_1;
      return;
    case 0x18:
      DAT_362c3cfc = 0xff000000;
      _DAT_362c3cf4 = FUN_36075380;
      DAT_362c3cf8 = FUN_36075060;
      DAT_362a3f78 = param_1;
      return;
    case 0x19:
      DAT_362c3cfc = 0;
      _DAT_362c3cf4 = FUN_36075380;
      DAT_362c3cf8 = FUN_36075060;
      DAT_362a3f78 = param_1;
      return;
    case 0x1a:
      DAT_362c3cfc = 0;
      _DAT_362c3cf4 = FUN_36075560;
      DAT_362c3cf8 = FUN_360750e0;
      DAT_362a3f78 = param_1;
      return;
    default:
      _DAT_362c3cf4 = (code *)0x0;
      DAT_362c3cf8 = (code *)0x0;
      DAT_362a3f78 = param_1;
      break;
    case 0x32:
      DAT_362c3cfc = 0;
      _DAT_362c3cf4 = FUN_360759f0;
      DAT_362c3cf8 = FUN_36075210;
      DAT_362a3f78 = param_1;
      return;
    case 0x33:
      DAT_362c3cfc = 0;
      _DAT_362c3cf4 = FUN_360758c0;
      DAT_362c3cf8 = FUN_360751c0;
      DAT_362a3f78 = param_1;
      return;
    }
  }
  return;
}

