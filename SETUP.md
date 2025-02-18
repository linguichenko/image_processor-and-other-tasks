# Настройка окружения

Мы рекомендуем использовать Ubuntu версии **20.04**. Мы проверяем
все задачи на этой версии операционной системы, и если вы будете использовать эту же версию
локально, то вы избежите многих проблем с неправильной настройкой окружения. Мы компилируем всё с **clang-11**.

## Предупреждение

Система предназначена только для сдачи заданий. Любая замеченная попытка нарушить работу системы или обойти тесты (читинг) приведет к обнулению оценки за всю неделю.

К читингу приравниваются умышленные и неумышленные действия, которые привели к получению данных приватных тестов.

## Регистрация в системе

1. Создайте аккаунт на https://gitlab.cpp-hse.net/. Если аккаунт уже есть и вы готовы решать с него задачи, новый создавать не надо.
1. Добавьте ssh-ключ в аккаунт:
    * Сгенерируйте ssh ключ, если у вас его еще нет.
     ```
     ssh-keygen -N "" -f ~/.ssh/id_rsa
     ```
    * Скопируйте содержимое файла id_rsa.pub (`cat ~/.ssh/id_rsa.pub`) в https://gitlab.cpp-hse.net/-/profile/keys
    * Проверьте, что ssh ключ работает. Выполните команду `ssh git@gitlab.cpp-hse.net`. Вы должны увидеть такое приветствие:
     ```
     $ ssh git@gitlab.cpp-hse.net
     PTY allocation request failed on channel 0
     Welcome to GitLab, $USERNAME!
     Connection to gitlab.cpp-hse.net closed.
     ```

1. Зарегистрируйтесь на https://base.cpp-hse.net/. Секрет для регистрации выдаст семинарист. Для авторизации на сайте используйте подготовленный выше аккаунт GitLab.

1. Для вас создастся приватный репозиторий, ссылка на который доступна из сайта с дедлайнами (ссылка `My Repo`). Имя репозитория будет иметь вид, аналогичный `pmi-221-1-Vasya-Pupkin-vpupkin`. Проверьте, что вы имеете к нему доступ. В дальнейшем вам надо будет работать именно с вашим приватным репозиторием, а не с общим.

## Подготовка локального репозитория

1. Склонируйте ваш приватный репозиторий. Ссылку для клонирования можно найти, нажав на синюю кнопку `Clone -> Clone with SSH` в интерфейсе репозитория. Команда будет иметь вид
   ```
   git clone git@gitlab.cpp-hse.net:hse-base-cxx-2024/ami-221-1-Vasya-Pupkin-vpupkin.git
   ```

   Команда `git clone` создаст директорию вида `ami-221-1-Vasya-Pupkin-vpupkin` и запишет туда все файлы из этого репозитория.

1. Настройте пользователя в git
   ```
   git config --global user.name "Vasya Pupkin"
   git config --global user.email vasya@pupkin.ru
   ```

## Сдача задач

Чтобы сдать задачу `task_name`, надо сделать следующие шаги:

1. Перейти на ветку `main`:
   ```
   git checkout main
   ```
   
2. Создать ветку `submits/task_name`. Имя ветки должно быть в точности таким (с учетом подстановки реального названия задачи вместо `task_name`).
   ```
   git checkout -b submits/task_name
   ```
   
   Если у вас уже была создана ветка `submits/task_name`, вам не нужно переходить на ветку `main` и создавать новую ветку. Достаточно переключиться на неё командой 
   ```
   git checkout submits/task_name
   ```

   Если вы уже находитесь в ветке `submits/task_name`, начинайте сразу с 3 пункта.

3. Написать код решения задачи.

4. Найти измененные файлы
   ```
   git status
   ```
5. Добавить измененные файлы `file1`, `file2` и т.д. в коммит
   ```
   git add file1 file2
   ```

6. Закоммитить изменения. Старайтесь писать осмысленные сообщения к коммитам. Это поможет вам, когда вы захотите разобраться в истории своих изменений.
   ```
   git commit -m "Describe your changes here"
   ```

7. Запушить изменения в ваш приватный репозиторий
   ```
   git push
   ```
## Синхронизация репозиториев

Периодически мы будем обновлять общий репозиторий с задачами, в ваш приватный репозиторий новые задачи попадут автоматически. Чтобы скачать обновления в ваш локальный репозиторий нужно выполнить команды:

   ```
   git checkout main      # перейти на ветку main
   git pull               # получить изменения из вашего приватного репозитория в локальный
   ```
