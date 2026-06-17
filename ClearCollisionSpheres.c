
/* public: void __thiscall CModelInstance::ClearCollisionSpheres(void) */

void __thiscall CModelInstance::ClearCollisionSpheres(CModelInstance *this)

{
  void *pvVar1;
  
                    /* 0x15e370  1258  ?ClearCollisionSpheres@CModelInstance@@QAEXXZ */
  if (*(int *)(this + 0x24) != 0) {
    pvVar1 = *(void **)(this + 0x28);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3615fe40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}

