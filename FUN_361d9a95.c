
undefined4 * __thiscall FUN_361d9a95(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 1;
  FUN_361d5d2c(this,param_1,0,1);
  *(undefined ***)this = &PTR_FUN_36249a90;
  if (param_1[6] == 1) {
    *(undefined4 *)((int)this + 0x1078) = 0;
  }
  else if (param_1[6] == 2) {
    *(undefined4 *)((int)this + 0x1078) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x1078) = 3;
  }
  if (param_1[7] == 1) {
    *(undefined4 *)((int)this + 0x107c) = 0;
  }
  else if (param_1[7] == 2) {
    *(undefined4 *)((int)this + 0x107c) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x107c) = 3;
  }
  if ((*(int *)((int)this + 0x1078) == 3) && (*(int *)((int)this + 0x107c) == 3)) {
    uVar4 = 0;
  }
  *(undefined4 *)((int)this + 0x1074) = uVar4;
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == 0x31545844) {
    *(undefined4 *)((int)this + 0x1080) = 8;
    *(undefined1 **)((int)this + 0x1088) = &LAB_361e28a9;
    *(code **)((int)this + 0x1084) = FUN_361e25ac;
  }
  else if (iVar1 == 0x32545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_361e2e6d;
    *(undefined1 **)((int)this + 0x1084) = &LAB_361e2e27;
  }
  else if (iVar1 == 0x33545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_361e28c1;
    *(code **)((int)this + 0x1084) = FUN_361e26ea;
  }
  else if (iVar1 == 0x34545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_361e2ea1;
    *(undefined1 **)((int)this + 0x1084) = &LAB_361e2e4a;
  }
  else if (iVar1 == 0x35545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_361e29d5;
    *(code **)((int)this + 0x1084) = FUN_361e276d;
  }
  *(undefined4 *)((int)this + 0x10b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x109c) = *(undefined4 *)((int)this + 0x1040);
  uVar2 = *(int *)((int)this + 0x1038) + 3U & 0xfffffffc;
  uVar6 = *(uint *)((int)this + 0x1030) & 0xfffffffc;
  *(uint *)((int)this + 0x1094) = uVar2;
  uVar5 = *(uint *)((int)this + 0x1034) & 0xfffffffc;
  uVar3 = *(int *)((int)this + 0x103c) + 3U & 0xfffffffc;
  *(uint *)((int)this + 0x1098) = uVar3;
  *(uint *)((int)this + 0x10a4) = uVar2 - uVar6 >> 2;
  *(int *)((int)this + 0x10a0) = *(int *)((int)this + 0x1044);
  *(uint *)((int)this + 0x108c) = uVar6;
  *(undefined4 *)((int)this + 0x10b8) = 0;
  *(undefined4 *)((int)this + 0x10bc) = 0;
  *(undefined4 *)((int)this + 0x10c0) = 0;
  *(uint *)((int)this + 0x1090) = uVar5;
  *(uint *)((int)this + 0x10a8) = uVar3 - uVar5 >> 2;
  *(int *)((int)this + 0x10ac) = *(int *)((int)this + 0x1044) - *(int *)((int)this + 0x1040);
  return this;
}

