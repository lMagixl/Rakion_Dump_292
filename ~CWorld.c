
/* public: __thiscall CWorld::~CWorld(void) */

void __thiscall CWorld::~CWorld(CWorld *this)

{
  CEntity *pCVar1;
  CEntity *this_00;
  void *pvVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xca620  503  ??1CWorld@@QAE@XZ */
  puStack_8 = &LAB_3621485c;
  pvStack_c = ExceptionList;
  local_4 = 0x12;
  ExceptionList = &pvStack_c;
  Clear(this);
  DestroyCollisionGrid(this);
  if (*(undefined4 **)(this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x34))(1);
  }
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x38))(1);
  }
  FUN_360cd280((int *)(this + 0x15c));
  local_4._0_1_ = 0x10;
  StringFree(*(char **)(this + 300));
  local_4._0_1_ = 0xf;
  StringFree(*(char **)(this + 0x124));
  local_4._0_1_ = 0xe;
  StringFree(*(char **)(this + 0x118));
  local_4._0_1_ = 0xd;
  StringFree(*(char **)(this + 0xac));
  local_4._0_1_ = 0xc;
  StringFree(*(char **)(this + 0xa8));
  local_4._0_1_ = 0xb;
  StringFree(*(char **)(this + 0xa4));
  local_4._0_1_ = 10;
  StringFree(*(char **)(this + 0xa0));
  this_00 = *(CEntity **)(this + 0x9c);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (this_00 != (CEntity *)0x0) {
    pCVar1 = this_00 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this_00);
    }
  }
  if (*(int *)(this + 0x84) != 0) {
    operator_delete__(*(void **)(this + 0x88));
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
  }
  local_4._0_1_ = 7;
  FUN_36103070((undefined4 *)(this + 0x68));
  local_4._0_1_ = 6;
  FUN_360d8440((undefined4 *)(this + 0x4c));
  FUN_360cd280((int *)(this + 0x3c));
  local_4._0_1_ = 4;
  if (*(int *)(this + 0x28) != 0) {
    pvVar2 = *(void **)(this + 0x2c);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,4,*(int *)((int)pvVar2 + -4),CIlluminationType::~CIlluminationType);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  local_4._0_1_ = 3;
  if (*(int *)(this + 0x20) != 0) {
    pvVar2 = *(void **)(this + 0x24);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,8,*(int *)((int)pvVar2 + -4),CEnvironmentType::~CEnvironmentType);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  local_4._0_1_ = 2;
  if (*(int *)(this + 0x18) != 0) {
    pvVar2 = *(void **)(this + 0x1c);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x38,*(int *)((int)pvVar2 + -4),CContentType::~CContentType);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  local_4._0_1_ = 1;
  if (*(int *)(this + 0x10) != 0) {
    pvVar2 = *(void **)(this + 0x14);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x28,*(int *)((int)pvVar2 + -4),CSurfaceType::~CSurfaceType);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(this + 8) != 0) {
    pvVar2 = *(void **)(this + 0xc);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0xc,*(int *)((int)pvVar2 + -4),CTextureBlending::~CTextureBlending);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)this != 0) {
    pvVar2 = *(void **)(this + 4);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x1c,*(int *)((int)pvVar2 + -4),
                 CTextureTransformation::~CTextureTransformation);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}

