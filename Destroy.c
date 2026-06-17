
/* public: void __thiscall CFontTexture::Destroy(void) */

void __thiscall CFontTexture::Destroy(CFontTexture *this)

{
  CFontTexture *local_4;
  
                    /* 0x188850  1484  ?Destroy@CFontTexture@@QAEXXZ */
  local_4 = this;
  FUN_3606b730((int)(this + 4));
  local_4 = *(CFontTexture **)(this + 8);
  FUN_3606b780(this + 0x10,9,&local_4);
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined4 *)(this + 0x24) = 1;
  FUN_3606b730((int)(this + 0x2c));
  local_4 = *(CFontTexture **)(this + 0x30);
  FUN_3606b780(this + 0x38,9,&local_4);
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x4c) = 1;
  FUN_3618a420((int)(this + 0x50));
  return;
}

