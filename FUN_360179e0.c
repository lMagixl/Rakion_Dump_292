
void __thiscall FUN_360179e0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int local_4;
  
  iVar1 = 0;
  if (*(int *)this != 0) {
    pvVar3 = *(void **)((int)this + 4);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar3,0x1c,*(int *)((int)pvVar3 + -4),ModelPolygon::~ModelPolygon);
      operator_delete__((void *)((int)pvVar3 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_4 = FUN_3600bfb0(param_1);
  if ((local_4 != 0) && (FUN_3600bf20(this,local_4), 0 < local_4)) {
    do {
      puVar2 = (undefined4 *)(param_1[1] + iVar1);
      pvVar3 = (void *)(*(int *)((int)this + 4) + iVar1);
      FUN_36014050(pvVar3,puVar2);
      *(undefined4 *)((int)pvVar3 + 8) = puVar2[2];
      *(undefined4 *)((int)pvVar3 + 0xc) = puVar2[3];
      *(undefined4 *)((int)pvVar3 + 0x10) = puVar2[4];
      *(undefined4 *)((int)pvVar3 + 0x14) = puVar2[5];
      iVar1 = iVar1 + 0x1c;
      local_4 = local_4 + -1;
      *(undefined4 *)((int)pvVar3 + 0x18) = puVar2[6];
    } while (local_4 != 0);
  }
  return;
}

