
undefined4 * __thiscall FUN_360cdd50(void *this,CMovableEntity *param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [6];
  
  CListHead::Clear((CListHead *)((int)this + 0x20));
  *(undefined4 *)((int)this + 0xf4) = 0x7f61b1e6;
  *(undefined4 *)((int)this + 0xf8) = 0x7f61b1e6;
  *(undefined4 *)((int)this + 0xfc) = 0x7f61b1e6;
  *(undefined4 *)((int)this + 0x100) = 0xff61b1e6;
  *(undefined4 *)((int)this + 0x104) = 0xff61b1e6;
  *(undefined4 *)((int)this + 0x108) = 0xff61b1e6;
  this_00 = (undefined4 *)((int)this + 0xf4);
  *(undefined4 *)((int)this + 0x1a8) = 0x7f61b1e6;
  *(undefined4 *)((int)this + 0x1ac) = 0x7f61b1e6;
  *(undefined4 *)((int)this + 0x1b0) = 0x7f61b1e6;
  *(undefined4 *)((int)this + 0x1b4) = 0xff61b1e6;
  *(undefined4 *)((int)this + 0x1b8) = 0xff61b1e6;
  *(undefined4 *)((int)this + 0x1bc) = 0xff61b1e6;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0x40000000;
  *(CMovableEntity **)((int)this + 4) = param_1;
  if (((((byte)param_1[0x10] & 4) == 0) && ((*(uint *)(param_1 + 0xc) & 0xffc00) != 0)) &&
     (*(int *)(param_1 + 0x84) != 0)) {
    iVar1 = *(int *)(param_1 + 4);
    if (((iVar1 == 3) || (iVar1 == 5)) || ((iVar1 == 9 || (iVar1 == 10)))) {
      *(undefined4 *)this = 0;
      *(CMovableEntity **)((int)this + 8) = param_1;
      FUN_360cd510(this,param_1,(undefined4 *)((int)this + 0x2c),(undefined4 *)((int)this + 0x38),
                   (undefined4 *)((int)this + 0x5c),(undefined4 *)((int)this + 0x68));
      *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0x84);
      local_30 = 0x7f61b1e6;
      local_24 = 0xff61b1e6;
      local_2c = 0x7f61b1e6;
      local_20 = 0xff61b1e6;
      local_28 = 0x7f61b1e6;
      local_1c = 0xff61b1e6;
      local_18[0] = 3e+38;
      local_18[3] = -3e+38;
      local_18[1] = 3e+38;
      local_18[4] = -3e+38;
      local_18[2] = 3e+38;
      local_18[5] = -3e+38;
      CCollisionInfo::MakeBoxAtPlacement
                (*(CCollisionInfo **)(param_1 + 0x84),(Vector<float,3> *)((int)this + 0x2c),
                 (Matrix<float,3,3> *)((int)this + 0x38),(AABBox<float,3> *)&local_30);
      CCollisionInfo::MakeBoxAtPlacement
                (*(CCollisionInfo **)(param_1 + 0x84),(Vector<float,3> *)((int)this + 0x5c),
                 (Matrix<float,3,3> *)((int)this + 0x68),(AABBox<float,3> *)local_18);
      *this_00 = local_30;
      *(undefined4 *)((int)this + 0xf8) = local_2c;
      *(undefined4 *)((int)this + 0xfc) = local_28;
      *(undefined4 *)((int)this + 0x100) = local_24;
      *(undefined4 *)((int)this + 0x104) = local_20;
      *(undefined4 *)((int)this + 0x108) = local_1c;
      FUN_360b1850(this_00,local_18);
    }
    else if (iVar1 == 4) {
      *(undefined4 *)this = 1;
      *(CMovableEntity **)((int)this + 0xc) = param_1;
      FUN_360cd510(this,param_1,(undefined4 *)((int)this + 0x8c),(undefined4 *)((int)this + 0x98),
                   (undefined4 *)((int)this + 0xbc),(undefined4 *)((int)this + 200));
      FUN_3600f9b0(&local_30);
      FUN_3600f9b0(local_18);
      CCollisionInfo::MakeBoxAtPlacement
                (*(CCollisionInfo **)(param_1 + 0x84),(Vector<float,3> *)((int)this + 0x8c),
                 (Matrix<float,3,3> *)((int)this + 0x98),(AABBox<float,3> *)&local_30);
      CCollisionInfo::MakeBoxAtPlacement
                (*(CCollisionInfo **)(param_1 + 0x84),(Vector<float,3> *)((int)this + 0xbc),
                 (Matrix<float,3,3> *)((int)this + 200),(AABBox<float,3> *)local_18);
      *this_00 = local_30;
      *(undefined4 *)((int)this + 0xf8) = local_2c;
      *(undefined4 *)((int)this + 0xfc) = local_28;
      *(undefined4 *)((int)this + 0x100) = local_24;
      *(undefined4 *)((int)this + 0x104) = local_20;
      *(undefined4 *)((int)this + 0x108) = local_1c;
      FUN_360b1850(this_00,local_18);
      return this;
    }
  }
  return this;
}

