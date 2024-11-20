/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUdUEyf+wkMgrW60P572+MAhDt664wDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTI0MTExOTAzMjI1\n\
OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAL9XBVz2U2azkghVOigQ\n\
vu1mAA+kntkl/Wsqq+zToGSwPyoH+rMtlUrnBfrPj5by3XnSqWuPhVI6eMqZIS9O\n\
qixiV9Q63Kafvjen47KBVPh0AMq58nA0jy4P5BCnrASfRR/5RYFLnG/hX7JL7LDv\n\
v9BMRlbcpHbkRO9f6AlfflvnwB/i1usSBtydeQl06LcT6duU3p2bAM5UJz55cSKY\n\
a79/AlXJau12St+vSPftvLFdmPuHrgvUhdjW5wkeVayKGiKtBxiQeRjDHK1zyxHn\n\
7j3ayjFIIfZVAPctiCe4nQphu4HbnnwY6LNS1sMUjI2m3bj+1gwNRfVhcGD75e+w\n\
AKsCAwEAAaNgMF4wHwYDVR0jBBgwFoAUtRvXDDTkm0HaHyB1zdnRkCA3rhYwHQYD\n\
VR0OBBYEFMP4Nc/6gP8S71GDOh1sAfEk+7WlMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQC4tELqHLXRVYeMDSi4Fajm+nEL\n\
OwtWyNG95BXC7y86NBh0LxWfV/po0+sDkUrZGAotRROUHqSFQCHhS+d0Rk0+NTCk\n\
HkjnjRFC+HhsGw7vJSk9f0QpNYgDDH94qzUkxH39eH5uvSXqyYXAuwONTlX0Jurr\n\
zuVPGyucAQVVg/YzHkAxoSaRmyVNIL4V9nSDTv1RoQQdYvNCwijGAG7HpQow4Z2Q\n\
nklUKVHPke5PEv1H4Sl08nl3ds0g32R82agF4+x14aPixl/+Fm4pn2e3PYj6SYFh\n\
8t+ZtwoQb/G8piSPfXsRQWRTFUz1B5RIDDRz39qWqIZ1ruGdEezYz5YQfYlR\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEAv1cFXPZTZrOSCFU6KBC+7WYAD6Se2SX9ayqr7NOgZLA/Kgf6\n\
sy2VSucF+s+PlvLdedKpa4+FUjp4ypkhL06qLGJX1Drcpp++N6fjsoFU+HQAyrny\n\
cDSPLg/kEKesBJ9FH/lFgUucb+FfskvssO+/0ExGVtykduRE71/oCV9+W+fAH+LW\n\
6xIG3J15CXTotxPp25TenZsAzlQnPnlxIphrv38CVclq7XZK369I9+28sV2Y+4eu\n\
C9SF2NbnCR5VrIoaIq0HGJB5GMMcrXPLEefuPdrKMUgh9lUA9y2IJ7idCmG7gdue\n\
fBjos1LWwxSMjabduP7WDA1F9WFwYPvl77AAqwIDAQABAoIBAQCuJ8O+6Ini6cEa\n\
ipBjlVJi/DtEAb9/wJ9X4sAX0EumOfFUDW03l17SjVKZBkEY0LebwY3pU/mybXwy\n\
U4yr5Xro6R4uEuFxW+aj+9E5UZSIi/WIkBVF4eEMuPQJ4MOmdV1Si+2ikLKz9rvG\n\
qmqmZaH+Mt63Ax9DA+RmyLGHjn6RoNwXLxpcFp5j6DOG4CZkWdGtErTttL3UK5Xl\n\
fG3RAepW22uM6HArSSeDMcdi4oRg0eaYBYoeF+R4Hpd9Akca7Kjkkn7xCLUMfSoI\n\
Vfx144KJtlZsdnibFa8GllioPejarsxTObMoL2R6AtrRRwdM2zf96IbVUAcdLUJr\n\
Pc7B3TO5AoGBAO0w6FkQ01IIJ/26p2WgDdCcEfm2ixV+FM/9ktVOzzxsTosVsTIF\n\
f4H1ZOJ+igqifBKAAeYf74JI2d05oV/0zbbrm6pvtCOzHzP+9N/CtrVDuo7G3kXf\n\
DhyaWtKo34ZbY8yoa0HX6n6+aqfq8zlE4gHfQ5y6ZmkQcz94vO3llTV9AoGBAM6D\n\
UEQdzLFgj5go/Zk/8HbjOyWMx9SUwdlYauSBENy3YxRdkuk7slR0vvVdjNAA8MfB\n\
FcTQ3sIzbSIRiY0NdlK9EWguLE7IZOAha9bnNv0ag+9FKIhBfynVloN2Dmp+BHBn\n\
rSE1ARiCJbnG0GmqZIraoniMWEBSZTrOTD0WwsdHAoGBALO8gfUsGNZqs9NDpCIQ\n\
XSedfMmbmF2bAy5xWtklNUj2UbZ3o6TiIbNbPy2a8gQJCLgEJGw7+wThK6bGSxEp\n\
stFQTM+kgf8jdxuxseH17PoC7tXOwRR1aH4oQXas3WU0z7WAUna8pUeSB8Ri+BiH\n\
qDP++X9EiOJIwuxwE8q6VI0JAoGAYpQkWJ+w+msRoJzQkbsH2niV31LYgQ2Ri2K9\n\
g95oYjPYQ/x3CIbKla41CYNimFgal///mDfsXd+WlNCyTHbEqLJAAO8pj2HxZVwO\n\
0kME6MUjfbARrRk2zo16j75nG0aUb+PNrTBUGZLm10ukaQxBelbrf4ffCLVMRUn8\n\
8pxO1jkCgYEAr+hIdkH8qUWDhTJGBlKNwhBd5RIiGL+o4i9sbtSXexqWj549XDkI\n\
FS5+z8uZcWdSD0BvsNdBDB2RQiF01DmQ107VCZPdie7VJ3oGE9L2Qx5hbAdepjIJ\n\
6552VfhoMm8FF8GIke58QU1lB+bI5nS/65i680zE4f6GvlWAkwnSQJY=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
