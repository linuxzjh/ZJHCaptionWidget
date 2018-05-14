#ifndef ZJHSINGLE_H
#define ZJHSINGLE_H

#include <iostream>
#include <mutex>

template<class T>
class ZJHSingle
{
public:
    template<typename... Args>
    static T* instance(Args&&... args)
    {
        static T* _instance = nullptr;
        static std::once_flag oc;
        std::call_once(oc, [&] {_instance = new T(std::forward<Args>(args)...); });
        return _instance;
    }

private:
    ZJHSingle() {}
    virtual ~ZJHSingle() {}
    ZJHSingle(const ZJHSingle& st) {}
    ZJHSingle &operator=(const ZJHSingle& st) {}
};

#define ZJHSINGLETON(x) ZJHSingle<x>::instance()
#define DECLARESINGLETON(clsname)	friend class ZJHSingle<clsname>;

#endif // ZJHSINGLE_H
