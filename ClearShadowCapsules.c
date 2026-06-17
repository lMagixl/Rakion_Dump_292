
/* public: void __thiscall CModelInstance::ClearShadowCapsules(void) */

void __thiscall CModelInstance::ClearShadowCapsules(CModelInstance *this)

{
  void *pvVar1;
  
                    /* 0x15e3f0  1274  ?ClearShadowCapsules@CModelInstance@@QAEXXZ */
  if (*(int *)(this + 0x2c) != 0) {
    pvVar1 = *(void **)(this + 0x30);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3615fe90);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}

