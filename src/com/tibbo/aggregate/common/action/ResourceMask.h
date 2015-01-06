// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ResourceMask.java

#ifndef ResourceMaskH
#define ResourceMaskH

template <class T> class ResourceMask
{
  /**
   * True if this Resource mask includes the given one some way. In case of hierarchical resources such as directories and files, class tree this method will determine if the given file belongs to a
   * folder described by this mask or if the given class is a child of one described by this resource mask.
   */
   virtual bool includes(T* resourceMask);
};

#endif
