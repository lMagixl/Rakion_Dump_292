
/* public: void __thiscall CEditModel::CreateEmptyAttachingSounds(void) */

void __thiscall CEditModel::CreateEmptyAttachingSounds(CEditModel *this)

{
  void *pvVar1;
  long lVar2;
  
                    /* 0xaa170  1415  ?CreateEmptyAttachingSounds@CEditModel@@QAEXXZ */
  if (*(int *)(this + 0x1300) != 0) {
    pvVar1 = *(void **)(this + 0x1304);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x14,*(int *)((int)pvVar1 + -4),CAttachedSound::~CAttachedSound);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x1300) = 0;
    *(undefined4 *)(this + 0x1304) = 0;
  }
  lVar2 = CAnimData::GetAnimsCt((CAnimData *)(this + 0x18));
  FUN_360b0ec0(this + 0x1300,lVar2);
  return;
}

