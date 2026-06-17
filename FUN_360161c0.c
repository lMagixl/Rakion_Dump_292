
undefined4 * __thiscall FUN_360161c0(void *this,int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *_Str1;
  uint uVar5;
  char *_Str2;
  undefined4 *puVar6;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)((int)this + 4);
  cVar1 = *(char *)((int)local_4[1] + 0x31);
  puVar4 = (undefined4 *)local_4[1];
  do {
    if (cVar1 != '\0') {
      return local_4;
    }
    uVar2 = puVar4[8];
    if ((uint)puVar4[9] < 0x10) {
      _Str2 = (char *)(puVar4 + 4);
    }
    else {
      _Str2 = (char *)puVar4[4];
    }
    uVar3 = *(uint *)(param_1 + 0x14);
    if (uVar3 == 0) {
LAB_36016224:
      if (uVar2 <= uVar3) {
        uVar5 = (uint)(uVar3 != uVar2);
        goto LAB_36016231;
      }
LAB_36016233:
      puVar6 = (undefined4 *)*puVar4;
      local_4 = puVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        _Str1 = (char *)(param_1 + 4);
      }
      else {
        _Str1 = *(char **)(param_1 + 4);
      }
      uVar5 = _strnicmp(_Str1,_Str2,uVar5);
      if (uVar5 == 0) goto LAB_36016224;
LAB_36016231:
      if ((int)uVar5 < 0) goto LAB_36016233;
      puVar6 = (undefined4 *)puVar4[2];
    }
    cVar1 = *(char *)((int)puVar6 + 0x31);
    puVar4 = puVar6;
  } while( true );
}

