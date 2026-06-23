# Maintainer: Ryan Jacobs <ryan@rmj.us>

pkgname=dps150tool-git
_pkgname=dps150tool
pkgver=r11.e7181fc
pkgrel=2
pkgdesc="Minimalistic CLI to control/monitor FNIRSI DPS-150PD power supply"
arch=("x86_64")
url="https://github.com/svenk123/dps150tool"
license=("MIT")
depends=("glibc")
makedepends=("git" "gcc" "make")
provides=("${_pkgname}")
conflicts=("${_pkgname}")
options=("!debug")
install="${_pkgname}.install"
source=("git+${url}.git")
sha256sums=("SKIP")

pkgver() {
  cd "${srcdir}/${_pkgname}"
  printf "r%s.%s" \
    "$(git rev-list --count HEAD)" \
    "$(git rev-parse --short HEAD)"
}

build() {
  cd "${srcdir}/${_pkgname}"
  make
}

package() {
  cd "${srcdir}/${_pkgname}"
  install -Dm755 "${_pkgname}" "${pkgdir}/usr/bin/${_pkgname}"
  install -Dm644 "README.md"   "${pkgdir}/usr/share/doc/${_pkgname}/README.md"
  install -Dm644 "LICENSE"     "${pkgdir}/usr/share/licenses/${pkgname}/LICENSE"
}
