/***
    This file is part of nss-hostslocal.
 
    nss-hostslocal is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2 of the License,
    or (at your option) any later version.
 
    nss-hostslocal is distributed in the hope that it will be useful, but1
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    General Public License for more details.
 
    You should have received a copy of the GNU Lesser General Public License
    along with nss-hostslocal; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
    USA.
***/

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <assert.h>
#include <nss.h>
#include <stdio.h>
#include <stdlib.h>

enum nss_status _nss_hostslocal_gethostbyname_r(
    const char *name,
    struct hostent *result,
    char *buffer,
    size_t buflen,
    int *errnop,
    int *h_errnop) {
  enum nss_status status = NSS_STATUS_UNAVAIL;
  return status;
}

enum nss_status _nss_hostslocal_gethostbyaddr_r(
    const void *addr,
    int len,
    int af,
    struct hostent *result,
    char *buffer,
    size_t buflen,
    int *errnop,
    int *h_errnop) {

  enum nss_status status = NSS_STATUS_UNAVAIL;
  return status;
}
