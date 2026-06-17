
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_361cb8e4(void *this,int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  float local_88 [25];
  int local_24;
  int *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_24 = *(int *)((int)this + 0x460);
  if ((*(int *)(local_24 * 0xd0 + 0x50 + (int)this) != 0) ||
     (iVar3 = FUN_361ca929((int)this), -1 < iVar3)) {
    local_10 = (int *)((int)this + 0x48c);
    if ((*local_10 == 0) || (*(int *)((int)this + 0x490) == 0)) {
      local_8 = 0;
      do {
        (**(code **)(**(int **)((int)this + 8) + 0xd0))(*(int **)((int)this + 8));
        (**(code **)(**(int **)((int)this + 8) + 0x130))(*(int **)((int)this + 8),0x142);
        (**(code **)(**(int **)((int)this + 8) + 0x160))(*(int **)((int)this + 8),0);
        (**(code **)(**(int **)((int)this + 8) + 0xa0))(*(int **)((int)this + 8),(int)this + 0x474);
        local_1c = *(undefined4 **)((int)this + 0xc);
        fVar1 = (float)(int)local_1c;
        if ((int)local_1c < 0) {
          fVar1 = fVar1 + _DAT_362265a8;
        }
        fVar1 = _DAT_36223384 / fVar1;
        FUN_361c7098(local_88,fVar1 - _DAT_36223384,fVar1 + _DAT_36223384,_DAT_36227d20 - fVar1,
                     1.0 - fVar1,0.0,_DAT_36228798);
        (**(code **)(**(int **)((int)this + 8) + 0x94))(*(int **)((int)this + 8),3,local_88);
        local_88[0x10] = 0.0;
        local_88[0x11] = 1.0;
        local_88[0x12] = 0.0;
        local_88[0x16] = 0.0;
        local_88[0x17] = 0.0;
        local_88[0x18] = 0.0;
        local_88[0x13] = 0.0;
        local_88[0x14] = 0.0;
        local_88[0x15] = 1.0;
        FUN_361c6851(local_88,local_88 + 0x13,local_88 + 0x16,local_88 + 0x10);
        (**(code **)(**(int **)((int)this + 8) + 0x94))(*(int **)((int)this + 8),2,local_88);
        local_88[0xe] = 0.0;
        local_88[0xd] = 0.0;
        local_88[0xc] = 0.0;
        local_88[0xb] = 0.0;
        local_88[9] = 0.0;
        local_88[8] = 0.0;
        local_88[7] = 0.0;
        local_88[6] = 0.0;
        local_88[4] = 0.0;
        local_88[3] = 0.0;
        local_88[2] = 0.0;
        local_88[1] = 0.0;
        local_88[0xf] = 1.0;
        local_88[10] = 1.0;
        local_88[5] = 1.0;
        local_88[0] = 1.0;
        (**(code **)(**(int **)((int)this + 8) + 0x94))(*(int **)((int)this + 8),0x100,local_88);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),7,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),8,3);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x16,1);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x80,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x88,1);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x97,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x98,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0xa4,1);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0xa7,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x1b,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x1c,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x1d,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x34,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x89,0);
        (**(code **)(**(int **)((int)this + 8) + 200))(*(int **)((int)this + 8),0x91,1);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,1,4);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,2,2);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,3,0);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,4,4);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,5,2);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,6,0);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),1,1,1);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),1,4,1);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0x10,2);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0x11,2);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0x12,2);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0xb,0);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0xd,3);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0xe,3);
        (**(code **)(**(int **)((int)this + 8) + 0xfc))(*(int **)((int)this + 8),0,0x18,0);
        if (local_8 == 0) {
          (**(code **)(**(int **)((int)this + 8) + 0xf4))(*(int **)((int)this + 8),0,0);
          (**(code **)(**(int **)((int)this + 8) + 0x14c))(*(int **)((int)this + 8),0,0,0);
          (**(code **)(**(int **)((int)this + 8) + 0x154))(*(int **)((int)this + 8),0,0);
          piVar4 = local_10;
        }
        else {
          piVar4 = (int *)((int)this + 0x490);
        }
        (**(code **)(**(int **)((int)this + 8) + 0xd4))(*(int **)((int)this + 8),piVar4);
        local_8 = local_8 + 1;
      } while (local_8 < 2);
    }
    (**(code **)(**(int **)((int)this + 8) + 0xdc))(*(int **)((int)this + 8),*local_10);
    (**(code **)(**(int **)((int)this + 8) + 0xd8))
              (*(int **)((int)this + 8),*(undefined4 *)((int)this + 0x490));
    local_20 = (int *)((int)this + 0x38);
    local_8 = 0;
    do {
      local_14 = (int *)*local_20;
      if (local_14 != (int *)0x0) {
        local_1c = (undefined4 *)((local_8 + local_24 * 2) * 0x68 + 0x50 + (int)this);
        local_18 = local_1c + param_1 * 4 + 2;
        if (local_18[3] != 0) {
          if (local_20[4] == 0) {
            local_14 = local_20 + 2;
            if ((*local_14 == 0) &&
               (iVar3 = (**(code **)(**(int **)((int)this + 8) + 100))
                                  (*(int **)((int)this + 8),*(undefined4 *)((int)this + 0xc),
                                   *(undefined4 *)((int)this + 0xc),
                                   *(undefined4 *)((int)this + 0x10),0,1,local_14), iVar3 < 0))
            goto LAB_361cbe54;
            (**(code **)(**(int **)((int)this + 8) + 0x7c))(*(int **)((int)this + 8),*local_14,0);
          }
          else {
            (**(code **)(*local_14 + 0x3c))(local_14,0,&local_c);
            (**(code **)(**(int **)((int)this + 8) + 0x7c))(*(int **)((int)this + 8),local_c,0);
            if (local_c != (int *)0x0) {
              (**(code **)(*local_c + 8))(local_c);
              local_c = (int *)0x0;
            }
          }
          (**(code **)(**(int **)((int)this + 8) + 0xa0))
                    (*(int **)((int)this + 8),(int)this + 0x474);
          puVar2 = local_1c;
          (**(code **)(**(int **)((int)this + 8) + 0x14c))
                    (*(int **)((int)this + 8),0,*local_1c,0x18);
          (**(code **)(**(int **)((int)this + 8) + 0x154))(*(int **)((int)this + 8),puVar2[1],0);
          (**(code **)(**(int **)((int)this + 8) + 0xf4))
                    (*(int **)((int)this + 8),0,*(undefined4 *)((int)this + 0x30));
          (**(code **)(**(int **)((int)this + 8) + 0x88))(*(int **)((int)this + 8));
          (**(code **)(**(int **)((int)this + 8) + 0x11c))
                    (*(undefined4 *)((int)this + 8),4,*local_18,local_18[1],local_18[2],
                     (uint)local_18[3] / 3);
          (**(code **)(**(int **)((int)this + 8) + 0x8c))(*(int **)((int)this + 8));
        }
      }
      local_8 = local_8 + 1;
      local_20 = local_20 + 1;
    } while (local_8 < 2);
    iVar3 = 0;
LAB_361cbe54:
    (**(code **)(**(int **)((int)this + 8) + 0xd8))(*(int **)((int)this + 8),*local_10);
  }
  return iVar3;
}

