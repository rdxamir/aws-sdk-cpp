include ../../Makefile.common

S3_CPP_FILES:=$(shell find aws-cpp-sdk-s3 -name '*.cpp')
CORE_CPP_FILES:=$(shell find aws-cpp-sdk-core -name '*.cpp')
S3OBJS:=$(S3_CPP_FILES:.cpp=.o) 
COREOBJS:=$(CORE_CPP_FILES:.cpp=.o)

SLIB= ../aws-cpp.a

CXXFLAGS +=-DAWS_SDK_PLATFORM_LINUX -DENABLE_CURL_CLIENT -DENABLE_OPENSSL_ENCRYPTION -DJSON_USE_EXCEPTION=0

CXXFLAGS:=$(filter-out -Wfloat-equal,$(CXXFLAGS))
CXXFLAGS:=$(filter-out -Wcast-qual,$(CXXFLAGS))
CXXFLAGS:=$(filter-out -Wsuggest-override,$(CXXFLAGS))
CXXFLAGS:=$(filter-out -Werror=ignored-qualifiers,$(CXXFLAGS))
CXXFLAGS:=$(filter-out -Wignored-qualifiers,$(CXXFLAGS))
CXXFLAGS:=$(filter-out -Wmissing-declarations,$(CXXFLAGS))

$(SLIB): $(S3OBJS) $(COREOBJS)
	@echo "AR $@"
	$(Q)ar rcs $@ $^
