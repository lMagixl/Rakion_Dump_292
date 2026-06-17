
undefined4 __thiscall
FUN_361d10fb(void *this,uint *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *extraout_EAX;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_24 [8];
  
  local_24[0] = 0;
  local_24[1] = 5;
  local_24[2] = 4;
  local_24[3] = 1;
  local_24[4] = 3;
  local_24[5] = 2;
  local_24[6] = 6;
  local_24[7] = 0;
  piVar1 = param_2;
  do {
    *(undefined4 *)((int)this + 0x40) = param_4;
    iVar4 = local_24[local_24[7]];
    *(int *)((int)this + 0x48) = iVar4;
    *(undefined4 *)((int)this + 0x44) = 3;
    if (iVar4 == 0) {
      piVar1 = (int *)FUN_361d10cb(this,(short *)param_1,(uint)param_2);
    }
    else if (iVar4 == 1) {
      piVar1 = (int *)FUN_361cf896(param_1,param_2);
    }
    else if (iVar4 == 2) {
      piVar1 = (int *)FUN_361cfb06(this,param_1,(uint)param_2);
    }
    else if (iVar4 == 3) {
      this = (void *)FUN_361d0283((int)param_1,(uint)param_2);
      piVar1 = extraout_EAX;
    }
    else if (iVar4 == 4) {
      piVar1 = (int *)FUN_361d0819(this,(int *)param_1,param_2);
    }
    else if (iVar4 == 5) {
      piVar1 = (int *)FUN_361cffad(this,param_1,(uint)param_2);
    }
    else if (iVar4 == 6) {
      piVar1 = (int *)FUN_361cee3a(this,param_1,(uint)param_2);
    }
    if (-1 < (int)piVar1) break;
    if ((*(void **)((int)this + 4) != (void *)0x0) && (*(int *)((int)this + 0x38) != 0)) {
      operator_delete(*(void **)((int)this + 4));
    }
    if ((*(void **)((int)this + 8) != (void *)0x0) && (*(int *)((int)this + 0x3c) != 0)) {
      operator_delete(*(void **)((int)this + 8));
    }
    if (*(void **)((int)this + 0x4c) != (void *)0x0) {
      FUN_361ced5b(*(void **)((int)this + 0x4c),1);
    }
    if (*(void **)((int)this + 0x50) != (void *)0x0) {
      FUN_361ced5b(*(void **)((int)this + 0x50),1);
    }
    local_24[7] = local_24[7] + 1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
  } while ((uint)local_24[7] < 7);
  iVar4 = 7;
  if (local_24[7] == 7) {
    uVar2 = 0x88760b59;
  }
  else {
    puVar6 = param_3;
    puVar5 = this;
    if (param_3 != (undefined4 *)0x0) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *param_3 = *(undefined4 *)((int)this + 0xc);
      param_3[1] = *(undefined4 *)((int)this + 0x10);
      param_3[2] = *(undefined4 *)((int)this + 0x14);
      param_3[3] = 1;
      puVar3 = FUN_361c10a7(*(undefined **)this);
      param_3[4] = puVar3;
      param_3[5] = *(undefined4 *)((int)this + 0x44);
      param_3[6] = *(undefined4 *)((int)this + 0x48);
      for (puVar6 = this; puVar6[0x13] != 0; puVar6 = (undefined4 *)puVar6[0x13]) {
        param_3[3] = param_3[3] + 1;
      }
    }
    do {
      for (; this != (undefined4 *)0x0; this = *(void **)((int)this + 0x4c)) {
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0xc);
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x10);
        *(undefined4 *)((int)this + 0x18) = 0;
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(undefined4 *)((int)this + 0x28) = 0;
        *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x14);
      }
      this = (void *)puVar5[0x14];
      puVar5 = this;
    } while (this != (undefined4 *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}

