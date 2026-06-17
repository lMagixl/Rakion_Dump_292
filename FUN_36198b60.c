
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198b60(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint local_78c;
  undefined1 local_784 [2];
  byte local_782 [1918];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  bVar1 = *param_1;
  uVar3 = 1;
  if (bVar1 != 0) {
    local_78c = (uint)bVar1;
    pbVar4 = local_782;
    do {
      *(undefined2 *)(pbVar4 + -2) = *(undefined2 *)(param_1 + (uVar3 & 0xffff));
      *pbVar4 = param_1[uVar3 + 2 & 0xffff];
      pbVar4[1] = param_1[uVar3 + 3 & 0xffff];
      pbVar4[2] = param_1[uVar3 + 4 & 0xffff];
      pbVar4[3] = param_1[uVar3 + 5 & 0xffff];
      pbVar4[6] = param_1[uVar3 + 6 & 0xffff];
      pbVar4[7] = param_1[uVar3 + 7 & 0xffff];
      pbVar4[10] = param_1[uVar3 + 8 & 0xffff];
      pbVar4[8] = param_1[uVar3 + 9 & 0xffff];
      pbVar4[9] = param_1[uVar3 + 10 & 0xffff];
      pbVar4[4] = param_1[uVar3 + 0xb & 0xffff];
      pbVar4[5] = param_1[uVar3 + 0xc & 0xffff];
      *(undefined4 *)(pbVar4 + 0xe) = *(undefined4 *)(param_1 + (uVar3 + 0xd & 0xffff));
      *(undefined2 *)(pbVar4 + 0x16) = *(undefined2 *)(param_1 + (uVar3 + 0x11 & 0xffff));
      *(undefined4 *)(pbVar4 + 0x12) = *(undefined4 *)(param_1 + (uVar3 + 0x13 & 0xffff));
      *(undefined2 *)(pbVar4 + 0x18) = *(undefined2 *)(param_1 + (uVar3 + 0x17 & 0xffff));
      lstrcpyA((LPSTR)(pbVar4 + 0x1a),(LPCSTR)(param_1 + (uVar3 + 0x19 & 0xffff)));
      iVar2 = lstrlenA((LPCSTR)(pbVar4 + 0x1a));
      uVar3 = uVar3 + 0x1a + iVar2;
      *(undefined2 *)(pbVar4 + 0xbc) = *(undefined2 *)(param_1 + (uVar3 & 0xffff));
      uVar3 = uVar3 + 2;
      pbVar4 = pbVar4 + 0xc0;
      local_78c = local_78c - 1;
    } while (local_78c != 0);
  }
  (**(code **)(*DAT_3637fb00 + 0x238))(bVar1,local_784);
  return;
}

