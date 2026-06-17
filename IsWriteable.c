
/* public: virtual int __thiscall CTMemoryStream::IsWriteable(void) */

int __thiscall CTMemoryStream::IsWriteable(CTMemoryStream *this)

{
                    /* 0x3f1f0  2511  ?IsWriteable@CTMemoryStream@@UAEHXZ */
  if ((*(int *)(this + 0x54) != 0) && (*(int *)(this + 0x58) == 0)) {
    return 1;
  }
  return 0;
}

