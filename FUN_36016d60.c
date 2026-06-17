
void * __thiscall FUN_36016d60(void *this,void *param_1)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (this == param_1) {
    return this;
  }
  pvVar2 = *(void **)((int)param_1 + 4);
  if (pvVar2 != (void *)0x0) {
    uVar4 = *(int *)((int)param_1 + 8) - (int)pvVar2 >> 1;
    if (uVar4 != 0) {
      _Dst = *(void **)((int)this + 4);
      if (_Dst == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 8) - (int)_Dst >> 1;
      }
      if (uVar4 <= uVar5) {
        memmove(_Dst,pvVar2,(*(int *)((int)param_1 + 8) - (int)pvVar2 >> 1) << 1);
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 1) * 2;
        return this;
      }
      if (_Dst == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 0xc) - (int)_Dst >> 1;
      }
      if (uVar5 < uVar4) {
        if (_Dst != (void *)0x0) {
          operator_delete(_Dst);
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 1;
        }
        uVar3 = FUN_36013720(this,uVar4);
        if ((char)uVar3 == '\0') {
          return this;
        }
        pvVar2 = FUN_36013d20(*(void **)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                              *(void **)((int)this + 4));
        *(void **)((int)this + 8) = pvVar2;
        return this;
      }
      if (_Dst == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - (int)_Dst >> 1;
      }
      pvVar2 = (void *)((int)*(void **)((int)param_1 + 4) + iVar1 * 2);
      FUN_3600fd00(*(void **)((int)param_1 + 4),(int)pvVar2,_Dst);
      pvVar2 = FUN_36013d20(pvVar2,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar2;
      return this;
    }
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}

