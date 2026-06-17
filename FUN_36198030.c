
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198030(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint local_174;
  undefined1 local_16c;
  byte local_16b [359];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  bVar1 = *param_1;
  uVar3 = 1;
  if (bVar1 != 0) {
    local_174 = (uint)bVar1;
    pbVar4 = local_16b;
    do {
      pbVar4[-1] = param_1[uVar3 & 0xffff];
      *pbVar4 = param_1[uVar3 + 1 & 0xffff];
      pbVar4[1] = param_1[uVar3 + 2 & 0xffff];
      pbVar4[2] = param_1[uVar3 + 3 & 0xffff];
      lstrcpyA((LPSTR)(pbVar4 + 3),(LPCSTR)(param_1 + (uVar3 + 4 & 0xffff)));
      iVar2 = lstrlenA((LPCSTR)(pbVar4 + 3));
      uVar3 = uVar3 + 5 + iVar2;
      pbVar4 = pbVar4 + 0x2d;
      local_174 = local_174 - 1;
    } while (local_174 != 0);
  }
  (**(code **)(*DAT_3637fb00 + 0x1bc))(bVar1,&local_16c);
  return;
}

