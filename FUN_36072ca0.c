
void __cdecl FUN_36072ca0(undefined4 *param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    *param_1 = 0x20000000;
    param_1 = param_1 + 1;
    *param_1 = 0x40020000;
    param_2 = param_2 & 0xfe;
  }
  if ((param_2 & 2) != 0) {
    param_1[1] = 0x20000001;
    param_1 = param_1 + 2;
    *param_1 = 0x40040004;
    param_2 = param_2 & 0xfd;
  }
  if ((param_2 & 4) != 0) {
    param_1[1] = 0x20000002;
    param_1 = param_1 + 2;
    *param_1 = 0x40010005;
    param_2 = param_2 & 0xfb;
  }
  if ((param_2 & 8) != 0) {
    param_1[1] = 0x20000003;
    param_1 = param_1 + 2;
    *param_1 = 0x40010006;
    param_2 = param_2 & 0xf7;
  }
  if ((param_2 & 0x10) != 0) {
    param_1[1] = 0x20000004;
    param_1 = param_1 + 2;
    *param_1 = 0x40010007;
    param_2 = param_2 & 0xef;
  }
  if ((param_2 & 0x20) != 0) {
    param_1[1] = 0x20000005;
    param_1 = param_1 + 2;
    *param_1 = 0x40010008;
    param_2 = param_2 & 0xdf;
  }
  if ((param_2 & 0x40) != 0) {
    param_1[1] = 0x20000006;
    param_1 = param_1 + 2;
    *param_1 = 0x40020001;
    param_2 = param_2 & 0xbf;
  }
  if ((char)param_2 < '\0') {
    param_1[1] = 0x20000007;
    param_1[2] = 0x40040003;
    param_1 = param_1 + 3;
    *param_1 = 0x40040002;
  }
  param_1[1] = 0xffffffff;
  return;
}

