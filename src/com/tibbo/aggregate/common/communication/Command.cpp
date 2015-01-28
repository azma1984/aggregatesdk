
#include "Command.h"

/*

Command::Command(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Command::Command()
    : Command(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

Command::Command(const std::string & data)
    : Command(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

Command::Command(::unsigned charArray* data)
    : Command(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

void Command::ctor()
{
    super::ctor();
}

void Command::ctor(const std::string & data)
{
    super::ctor();
    add(data);
}

void Command::ctor(::unsigned charArray* data)
{
    super::ctor();
    write(data, int(0), data)->length);
}

std::string Command::header()
{
    return 0;
}

std::string Command::footer()
{
    return 0;
}

std::string Command::getContent()
{
    try {
        return super::toString(util::StringUtils::UTF8_CHARSET())->name());
    } catch (::java::io::UnsupportedEncodingException* ex) {
        throw new ::java::lang::IllegalStateException();
    }
}

void Command::add(const std::string & data)
{
    try {
        write(data)->getBytes(StringUtils::UTF8_CHARSET()));
    } catch (std::exception* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

void Command::send(::java::nio::channels::ByteChannel* byteChannel)
{
    send(byteChannel, true);
}

void Command::send(::java::nio::channels::ByteChannel* byteChannel, bool encapsulate)
{
    if(byteChannel == 0 || !byteChannel)->isOpen()) {
        throw new DisconnectionException(Cres::get())->getString(u"disconnected"_j));
    }
    try {
        auto header = encapsulate ? this->header() : static_cast< const std::string & >(0);
        auto footer = encapsulate ? this->footer() : static_cast< const std::string & >(0);
        auto size = (header != 0 ? header)->length() : int(0)) + static_cast< ::java::io::ByteArrayOutputStream* >(this)->size() + (footer != 0 ? footer)->length() : int(0));
        auto buff = ::java::nio::ByteBuffer::allocate(size);
        buff)->clear();
        if(header != 0) {
            buff)->put(header)->getBytes(StringUtils::UTF8_CHARSET()));
        }
        buff)->put(toByteArray_());
        if(footer != 0) {
            buff)->put(footer)->getBytes(StringUtils::UTF8_CHARSET()));
        }
        buff)->flip();
        auto sent = int(0);
        do {
            sent += byteChannel)->write(buff);
        } while (sent < size);
    } catch (SocketDisconnectionException* ex) {
        throw new DisconnectionException(Cres::get())->getString(u"disconnected"_j), ex);
    } catch (::java::nio::channels::ClosedChannelException* ex) {
        throw new DisconnectionException(Cres::get())->getString(u"disconnected"_j), ex);
    } catch (std::exception* ex) {
        throw ex;
    }
}

void Command::send(::java::io::OutputStream* stream)
{
    auto header = this->header();
    if(header != 0) {
        stream)->write(header)->getBytes(StringUtils::UTF8_CHARSET()));
    }
    stream)->write(toByteArray_());
    auto footer = this->footer();
    if(footer != 0) {
        stream)->write(footer)->getBytes(StringUtils::UTF8_CHARSET()));
    }
}

std::string Command::getId()
{
    return 0;
}

bool Command::isAsync()
{
    return false;
}

 Command::getTimeout()
{
    return timeout;
}

void Command::setTimeout(long  timeout)
{
    this->timeout = timeout;
}




