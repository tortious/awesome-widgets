pytextmonitor
=============

Информация
----------
PyTextMonitor - минималистичный плазмоид, написанный на Python2. Он выглядит, как виджеты в Awesome WM.

Настройка
---------
Для редактирования внешнего виде, откройте окно настроек и установите требуемый формат в поля:
* тэг `$time` - время в стандартном формате. Например, *fri Nov 6 04:48:01 2013*
* тэг `$isotime` - время в ISO формате
* тэг `$shorttime` - время в коротком формате
* тэг `$longtime` - время в длинном формате
* тэг `$custom` - свой формат времени
* тэг `$uptime` - время работы, *---d--h--m*
* тэг `$custom` - свой формат аптайма
* тэг `$cpu` - общая загрузка CPU, *%*
* тэг `$cpuN` - загрузка CPU для ядра N, *%*. N должно быть в промежутке от 0 до 8
* тэг `$cpucl` - средняя частота CPU, *MHz*
* тэг `$cpuclN` - частота CPU для ядра N, *MHz*. N должно быть в промежутке от 0 до 8
* тэг `$tempN` - температура для устройства N. Например, `$temp0`
* тэг `$gpu` - использование GPU, *%*. `aticonfig` или `nvidia-smi` должны быть установлены
* тэг `$gputemp` - температура GPU. `aticonfig` или `nvidia-smi` должны быть установлены
* тэг `$mem` - использование RAM, *%*
* тэг `$memmb` - использование RAM, *MB*
* тэг `$swap` - swap, *%*
* тэг `$swapmb` - swap, *MB*
* тэг `$hddN` - использование точки монтирования N, *%*. Например, `$hdd0`
* тэг `$hddtempN` - температура HDD N. Например, `$hddtemp0`
* тэг `$down` - скорость загрузки, *KB/s*
* тэг `$up` - скорость отдачи, *KB/s*
* тэг `$netdev` - текущий сетевой интерфейс
* тэг `$bat` - заряд батареи, *%*
* тэг `$ac` - статус адаптора питания. Возвращает (\*), если AC подключен или *( )*, если нет
* тэг `$album` - альбом. Один из поддерживаемых плееров должен быть установлен
* тэг `$artist` - исполнитель. Один из поддерживаемых плееров должен быть установлен
* тэг `$progress` - прогресс. Один из поддерживаемых плееров должен быть установлен
* тэг `$time` - длительность. Один из поддерживаемых плееров должен быть установлен
* тэг `$title` - название. Один из поддерживаемых плееров должен быть установлен
* тэг `$custom` - возвращает результат своей команды

Порядок полей изменится, если вы измените позицию слайдеров. HTML тэги в полях работают корректно.

**ЗАМЕЧАНИЕ** вы не можете установить тэг `$cpu`, например, в поле swap. **`$cpu` будет работать только в поле CPU**.

Расширенные настройки
---------------------
**Свой формат времени**

* тэг `$dddd` - день недели в длинном формате
* тэг `$ddd` - день недели в коротком формате
* тэг `$dd` - день
* тэг `$d` - день без нуля
* тэг `$MMMM` - месяц в длинном формате
* тэг `$MMM` - месяц в коротком формате
* тэг `$MM` - месяц
* тэг `$M` - месяц без нуля
* тэг `$yyyy` - год
* тэг `$yy` - год в коротком формате
* тэг `$hh` - часы
* тэг `$h` - часы без нуля
* тэг `$mm` - минуты
* тэг `$m` - минуты без нуля
* тэг `$ss` - секунды
* тэг `$s` - секунды без нуля

**Свой формат аптайма**

* тэг `$dd` - дни аптайма
* тэг `$d` - дни аптайма без нуля
* тэг `$hh` - часы аптайма
* тэг `$h` - часы аптайма без нуля
* тэг `$mm` - минуты аптайма
* тэг `$m` - минуты аптайма без нуля

**Датчики температуры**

Список датчиков, которые будут наблюдаться в поле temo (содержимое комбо бокса берется из `sensors`). Виджет редактируем, клавиша delete удалит текущую строку.

**Точки монтирования**

Список точек монтирования, которые будут наблюдаться в поле hdd (содержимое комбо бокса берется из `mount`). Виджет редактируем, клавиша delete удалит текущую строку.

**HDD**

Список HDD, которые будут наблюдаться в поле hddtemp (содержимое комбо бокса берется из `find`). Виджет редактируем, клавиша delete удалит текущую строку.

**Директория с сетевыми интерфейсами**

Путь к директории, которая содержит информацию о сетевых интерфейсах. По умолчанию `/sys/class/net`. Требуется для определения сетевого устройства.

**Сетевое устройство**

Использовать указанный интерфейс, как активный. Содержимое комбо бокса берется из **директории с сетевыми интерфейсами**. Эта опция отключит авто определение интерфейса.

**Устройство батареи**

Файл с информацией о батарее. Данный файл (`/sys/class/power_supply/BAT0/capacity` по умолчанию) должен содержать только заряд батареи в процентах.

**Устройство AC**

Файл с информацией об адапторе питания. Данный файл (`/sys/class/power_supply/AC/online` по умолчанию) должен содержать `1`, если адаптор подключен.

**Музыкальные плеер**

Выберете один из поддерживаемых музыкальных плееров.

Настройки тултипа
-----------------
Начиная с версии 1.7.0 поля CPU, частота CPU, память, swap и сеть поддерживают графический тултип. Чтобы включить их, просто сделайте требуемые чекбоксы полностью чекнутыми. Число хранимых значений может быть выставленно в данной вкладке. Цвета графиков также настраиваются.

Настройки DataEngine
--------------------
**Устройство GPU**

Выберете одно из поддерживаемых устройств GPU. `auto` включит автоматическое определение. По умолчанию `auto`.

**HDD**

Выберете один из HDD для монитора его температуры. `all` включит монитор для всех доступных устройств. По умолчанию `all`.

**Адрес MPD**

Адрес MPD сервера. По умолчанию `localhost`.

**Порт MPD**

Порт MPD сервера. По умолчанию `6600`.

**Своя команда**

*ЗАМЕЧАНИЕ* Может вызвать зависание компьютера.

Команда, которая будет запущена для соответствующего поля.

Настройка DataEngine
--------------------
Вы можете отредактировать настройки DataEngine вручную. Откройте файл `/usr/share/config/extsysmon.conf` или `$HOME/.kde4/share/config/extsysmon.conf`, в зависимости от типа установки. Раскомментируйте требуемые строки и отредактируйте их.

Инструкция
==========

Зависимости
-----------
* kdebase-workspace
* kdebindings-python2
* lm_sensors (*для определения датчиков температуры*)
* sysstat (*для уведомлений*)

Опциональные зависимости
------------------------
* проприетарный видеодрайвер
* hddtemp (убедитесь, что может быть запущен с `sudo` без пароля. Просто добавьте следующую строку в `/etc/sudoers`: `$USERNAME ALL=NOPASSWD: /usr/bin/hddtemp`)
* музыкальный плеер (amarok, mpd или qmmp)

Зависимости сборки
------------------
* automoc4
* cmake
* kdebase-runtime

Установка
---------
* скачать исходный архив
* установить

        mkdir build && cd build
        cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=`kde4-config --localprefix` ../
        make && make install

  Для установки в `/`:

        mkdir build && cd build
        cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=`kde4-config --prefix` ../
        make && sudo make install

Дополнительная информация
=========================

Ссылки
------
* [Домашняя страница](http://arcanis.name/projects/pytextmonitor/)
* Виджет на [kde-look](http://kde-look.org/content/show.php/Py+Text+Monitor?content=157124)
* DataEngine на [kde-look](http://kde-look.org/content/show.php/Extended+Systemmonitor+DataEngine?content=158773)
* Пакет для Archlinux в [AUR](https://aur.archlinux.org/packages/kdeplasma-applets-pytextmonitor/)