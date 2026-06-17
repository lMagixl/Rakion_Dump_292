
/* public: __thiscall CTerrainLayer::~CTerrainLayer(void) */

void __thiscall CTerrainLayer::~CTerrainLayer(CTerrainLayer *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x179d60  494  ??1CTerrainLayer@@QAE@XZ */
  puStack_8 = &LAB_3621a97b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_36175520(*(int **)(this + 4));
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    FUN_36179f20();
    operator_delete(pvVar1);
    *(undefined4 *)this = 0;
  }
  local_4 = 0xffffffff;
  StringFree(*(char **)(this + 8));
  ExceptionList = local_c;
  return;
}

