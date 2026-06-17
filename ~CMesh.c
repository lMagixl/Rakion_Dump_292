
/* public: virtual __thiscall CMesh::~CMesh(void) */

void __thiscall CMesh::~CMesh(CMesh *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x159f50  438  ??1CMesh@@UAE@XZ */
  puStack_8 = &LAB_36219f36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  Clear(this);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(this + 0x14) != 0) {
    pvVar1 = *(void **)(this + 0x18);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x54,*(int *)((int)pvVar1 + -4),MeshLOD::~MeshLOD);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

