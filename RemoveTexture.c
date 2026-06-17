
/* WARNING: Removing unreachable block (ram,0x3615e663) */
/* WARNING: Removing unreachable block (ram,0x3615e667) */
/* public: void __thiscall CModelInstance::RemoveTexture(struct TextureInstance *,struct
   MeshInstance *) */

void __thiscall
CModelInstance::RemoveTexture(CModelInstance *this,TextureInstance *param_1,MeshInstance *param_2)

{
  void *pvVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15e5a0  3144
                       ?RemoveTexture@CModelInstance@@QAEXPAUTextureInstance@@PAUMeshInstance@@@Z */
  puStack_8 = &LAB_3621a1df;
  local_c = ExceptionList;
  iVar3 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_36035f30((undefined4 *)(param_2 + 4));
  FUN_36036260(&local_14,iVar2 + -1);
  pvVar1 = local_10;
  this_00 = local_10;
  if (0 < iVar2) {
    do {
      if ((CTextureObject *)(iVar3 + *(int *)(param_2 + 8)) != (CTextureObject *)param_1) {
        FUN_3615c350(this_00,(CTextureObject *)(iVar3 + *(int *)(param_2 + 8)));
        this_00 = (void *)((int)this_00 + 0x1c);
      }
      iVar3 = iVar3 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_361609d0(param_2 + 4,&local_14);
  if ((local_14 != 0) && (pvVar1 != (void *)0x0)) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36036030);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  ExceptionList = local_c;
  return;
}

