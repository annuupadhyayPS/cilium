/* Dummy configuration for test compilation */

#define LXC_MAC { .addr = { 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff } }
#define LXC_IP { .addr = { 0xbe, 0xef, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x1, 0x1, 0x65, 0x82, 0xbc } }
#define LXC_ID 0x1010
#define LXC_ID_NB 0x1010
#define SECLABEL 0xfffff
#define SECLABEL_NB 0xfffff
#define LXC_POLICYMAP cilium_policy_foo
#define NODE_MAC { .addr = { 0xde, 0xad, 0xbe, 0xef, 0xc0, 0xde } }
#define GENEVE_CLASS_EXPERIMENTAL 0xffff
#define GENEVE_TYPE_SECLABEL 0x1
#define GENEVE_OPTS { 0xff, 0xff, 0x1, 0x1, 0x0, 0x0, 0x1, 0x1e }
