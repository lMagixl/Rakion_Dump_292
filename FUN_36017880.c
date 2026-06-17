
void __thiscall FUN_36017880(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint unaff_EDI;
  
  puVar1 = FUN_36016120(this,(int)param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    if ((uint)puVar1[9] < 0x10) {
      puVar2 = puVar1 + 4;
    }
    else {
      puVar2 = (undefined4 *)puVar1[4];
    }
    uVar3 = FUN_3600e4d0(param_2,0,*(undefined4 *)((int)param_2 + 0x14),(uint)puVar2,
                         (char *)puVar1[8],unaff_EDI);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}

