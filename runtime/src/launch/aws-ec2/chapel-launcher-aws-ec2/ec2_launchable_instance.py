
import magic_repr

class EC2LaunchableInstance(object):

    def __init__(self, instance, chapel_exe):
        self.instance = instance
        self.chapel_exe = chapel_exe

    __repr__ = magic_repr.make_repr('instance', 'chapel_exe')
