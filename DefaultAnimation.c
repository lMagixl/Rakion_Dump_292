
/* public: void __thiscall CAnimData::DefaultAnimation(void) */

void __thiscall CAnimData::DefaultAnimation(CAnimData *this)

{
  undefined4 *puVar1;
  char *pcVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1f7f0  1458  ?DefaultAnimation@CAnimData@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ecb2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x14) = 1;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(0x30);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)(puVar1 + 1);
    *puVar1 = 1;
    _eh_vector_constructor_iterator_(pcVar2,0x2c,1,FUN_3601f4c0,FUN_3601f4d0);
  }
  *(char **)(this + 0x18) = pcVar2;
  *(undefined4 *)pcVar2 = s_I_OnlyAnim_36223d72._2_4_;
  *(undefined4 *)(pcVar2 + 4) = s_I_OnlyAnim_36223d72._6_4_;
  pcVar2[8] = s_I_OnlyAnim_36223d72[10];
  *(undefined4 *)(*(int *)(this + 0x18) + 0x20) = 0x3ca3d70a;
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0x18) + 0x24) = 1;
  pvVar3 = AllocMemory(4);
  *(void **)(*(int *)(this + 0x18) + 0x28) = pvVar3;
  **(undefined4 **)(*(int *)(this + 0x18) + 0x28) = 0;
  ExceptionList = local_c;
  return;
}

