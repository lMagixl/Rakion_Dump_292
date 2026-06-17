
/* private: __thiscall CFontTexture::~CFontTexture(void) */

void __thiscall CFontTexture::~CFontTexture(CFontTexture *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x188c30  424  ??1CFontTexture@@AAE@XZ */
  puStack_8 = &LAB_3621ae5f;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  Destroy(this);
  local_4._0_1_ = 1;
  FUN_3618a420((int)(this + 0x50));
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x3c));
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  FUN_3606b730((int)(this + 0x2c));
  operator_delete(*(void **)(this + 0x30));
  *(undefined4 *)(this + 0x30) = 0;
  local_4 = 0xffffffff;
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  FUN_3606b730((int)(this + 4));
  operator_delete(*(void **)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  ExceptionList = local_c;
  return;
}

