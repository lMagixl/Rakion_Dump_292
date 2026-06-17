
/* public: int __thiscall CNetworkLibrary::IsDemoPlayFinished(void) */

int __thiscall CNetworkLibrary::IsDemoPlayFinished(CNetworkLibrary *this)

{
                    /* 0xf3880  2379  ?IsDemoPlayFinished@CNetworkLibrary@@QAEHXZ */
  if ((*(int *)(this + 0x8ec) != 0) && (*(int *)(this + 0x8f0) != 0)) {
    return 1;
  }
  return 0;
}

