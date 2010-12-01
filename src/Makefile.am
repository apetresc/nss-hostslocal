# This file is part of nss-mdns.
#
# nss-mdns is free software; you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation; either version 2 of the
# License, or (at your option) any later version.
#
# nss-mdns is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with nss-mdns; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA.

AM_LDFLAGS=-avoid-version -module -export-dynamic

lib_LTLIBRARIES =

if FREEBSD_NSS
lib_LTLIBRARIES += \
	nss_hostslocal.la
else
lib_LTLIBRARIES += \
	libnss_hostslocal.la
endif

sources = 

# GNU libc
libnss_hostslocal_la_SOURCES= $(sources) nss.c
libnss_hostslocal_la_CFLAGS=$(AM_CFLAGS)
libnss_hostslocal_la_LDFLAGS=$(AM_LDFLAGS) -shrext .so.2 -Wl,-version-script=$(srcdir)/map-file

install-exec-hook:
	rm -rf $(DESTDIR)$(libdir)/libnss_hostslocal.la

uninstall-hook:
	rm -rf $(DESTDIR)$(libdir)/libnss_hostslocal.la

