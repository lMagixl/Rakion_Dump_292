
void __thiscall FUN_360d0eb0(void *this,CMovableEntity *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if (-1 < (int)((uint)(*(float *)((int)this + 0x108) - *(float *)(iVar1 + 0x20)) |
                (uint)(*(float *)(iVar1 + 0x24) - *(float *)((int)this + 0xf4)) |
                (uint)(*(float *)((int)this + 0x100) - *(float *)(iVar1 + 0x18)) |
                (uint)(*(float *)(iVar1 + 0x28) - *(float *)((int)this + 0xf8)) |
                (uint)(*(float *)((int)this + 0x104) - *(float *)(iVar1 + 0x1c)) |
                (uint)(*(float *)(iVar1 + 0x2c) - *(float *)((int)this + 0xfc)))) {
    *(CMovableEntity **)((int)this + 0x10c) = param_1;
    *(undefined4 *)((int)this + 0x110) = 0;
    if (*(int *)this == 0) {
      *(CMovableEntity **)((int)this + 0xc) = param_1;
      FUN_360cd510(this,param_1,(undefined4 *)((int)this + 0x8c),(undefined4 *)((int)this + 0x98),
                   (undefined4 *)((int)this + 0xbc),(undefined4 *)((int)this + 200));
      *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0x84);
      FUN_360ce6b0((int)this);
      FUN_360d0c30(this);
      return;
    }
    *(CMovableEntity **)((int)this + 8) = param_1;
    FUN_360cd510(this,param_1,(undefined4 *)((int)this + 0x2c),(undefined4 *)((int)this + 0x38),
                 (undefined4 *)((int)this + 0x5c),(undefined4 *)((int)this + 0x68));
    *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0x84);
    FUN_360ce6b0((int)this);
    FUN_360ce230((int)this);
    FUN_360d0d80(this);
  }
  return;
}

