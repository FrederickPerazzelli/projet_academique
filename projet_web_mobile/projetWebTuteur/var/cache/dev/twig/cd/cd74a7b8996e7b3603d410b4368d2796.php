<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* user/profile.html.twig */
class __TwigTemplate_97565cd9984d1136c710780fcd034fb2 extends Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->blocks = [
            'header' => [$this, 'block_header'],
            'title' => [$this, 'block_title'],
            'body' => [$this, 'block_body'],
        ];
    }

    protected function doGetParent(array $context)
    {
        // line 16
        return "base.html.twig";
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "user/profile.html.twig"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "user/profile.html.twig"));

        $this->parent = $this->loadTemplate("base.html.twig", "user/profile.html.twig", 16);
        $this->parent->display($context, array_merge($this->blocks, $blocks));
        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

    }

    // line 1
    public function block_header($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "header"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "header"));

        // line 2
        echo "<!--****************************************
 Fichier : profile.html.twig
 Auteur : Jean-Nyckolas Roy
 Fonctionnalité : A3
 Date : 2022-04-26
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 2022-04-26 - Jean-Nyckolas - Affichage de base et ajout des filtres
 =========================================================
****************************************-->
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 18
    public function block_title($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        echo "Profil";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 20
    public function block_body($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        // line 21
        echo "    <style>
        .imageProfil
        {
            object-fit: cover;
            width: 175pt;
            height: 175pt;
            border: solid 1px;
        }
        
        #meetings
        {
            flex-grow: 1;
        }
        #meetings div
        {
            height: 200pt;
            overflow-wrap: break-word;
            overflow-y: scroll;
        }
    </style>
    ";
        // line 41
        $this->loadTemplate("header.html.twig", "user/profile.html.twig", 41)->display($context);
        // line 42
        echo "    <h1>Profil</h1>
    ";
        // line 43
        echo         $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->renderBlock((isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 43, $this->source); })()), 'form_start');
        echo "
    <div id=\"profileForm\" class=\"flex-row wrap\">
        <div class=\"flex-column col-5\">
            <fieldset>
                <legend>Informations générales</legend>
                ";
        // line 48
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 48, $this->source); })()), "email", [], "any", false, false, false, 48), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                ";
        // line 49
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 49, $this->source); })()), "firstName", [], "any", false, false, false, 49), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                ";
        // line 50
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 50, $this->source); })()), "lastName", [], "any", false, false, false, 50), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                ";
        // line 51
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 51, $this->source); })()), "phone", [], "any", false, false, false, 51), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                ";
        // line 52
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 52, $this->source); })()), "birthdate", [], "any", false, false, false, 52), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
            </fieldset>
            <fieldset>
                <legend>Informations académiques</legend>
                ";
        // line 56
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 56, $this->source); })()), "institution", [], "any", false, false, false, 56), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                ";
        // line 57
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 57, $this->source); })()), "field", [], "any", false, false, false, 57), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                ";
        // line 58
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 58, $this->source); })()), "masteredSubject", [], "any", false, false, false, 58), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
            </fieldset>
        </div>
        <div class=\"flex-column col-5 right\">
            <div class=\"flex-row wrap\">
                ";
        // line 63
        if (twig_get_attribute($this->env, $this->source, (isset($context["user"]) || array_key_exists("user", $context) ? $context["user"] : (function () { throw new RuntimeError('Variable "user" does not exist.', 63, $this->source); })()), "image", [], "any", false, false, false, 63)) {
            // line 64
            echo "                    <img class=\"auto imageProfil\" alt=\"Image profil\" src=\"data:image/png;base64,";
            echo twig_escape_filter($this->env, (isset($context["image"]) || array_key_exists("image", $context) ? $context["image"] : (function () { throw new RuntimeError('Variable "image" does not exist.', 64, $this->source); })()), "html", null, true);
            echo "\"></img>
                ";
        } else {
            // line 66
            echo "                    <img class=\"auto imageProfil\"/>
                ";
        }
        // line 68
        echo "                <fieldset class=\"flex-column col-12 height-fit\">
                    <legend>Compte</legend>
                    ";
        // line 70
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 70, $this->source); })()), "role", [], "any", false, false, false, 70), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                    ";
        // line 71
        echo $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->searchAndRenderBlock(twig_get_attribute($this->env, $this->source, (isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 71, $this->source); })()), "validAccount", [], "any", false, false, false, 71), 'row', ["attr" => ["disabled" => "disabled"]]);
        echo "
                </fieldset>
            </div>
            <fieldset id=\"meetings\">
                <legend>Rencontres</legend>
                <div>
                    ";
        // line 77
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["studentMeetings"]) || array_key_exists("studentMeetings", $context) ? $context["studentMeetings"] : (function () { throw new RuntimeError('Variable "studentMeetings" does not exist.', 77, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["meeting"]) {
            // line 78
            echo "                        <p>";
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "date", [], "any", false, false, false, 78), "Y-m-d"), "html", null, true);
            echo " en tant qu'étudiant avec <a href=\"/profile/";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "tutor", [], "any", false, false, false, 78), "id", [], "any", false, false, false, 78), "html", null, true);
            echo "\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "tutor", [], "any", false, false, false, 78), "firstName", [], "any", false, false, false, 78), "html", null, true);
            echo " ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "tutor", [], "any", false, false, false, 78), "lastName", [], "any", false, false, false, 78), "html", null, true);
            echo "</a></p>
                    ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['meeting'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 80
        echo "                    ";
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["tutorMeetings"]) || array_key_exists("tutorMeetings", $context) ? $context["tutorMeetings"] : (function () { throw new RuntimeError('Variable "tutorMeetings" does not exist.', 80, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["meeting"]) {
            // line 81
            echo "                        <p>";
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "date", [], "any", false, false, false, 81), "Y-m-d"), "html", null, true);
            echo " en tant que tuteur avec <a href=\"/profile/";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "student", [], "any", false, false, false, 81), "id", [], "any", false, false, false, 81), "html", null, true);
            echo "\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "student", [], "any", false, false, false, 81), "firstName", [], "any", false, false, false, 81), "html", null, true);
            echo " ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "student", [], "any", false, false, false, 81), "lastName", [], "any", false, false, false, 81), "html", null, true);
            echo "</a></p>
                    ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['meeting'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 83
        echo "                    ";
        if ((twig_test_empty((isset($context["studentMeetings"]) || array_key_exists("studentMeetings", $context) ? $context["studentMeetings"] : (function () { throw new RuntimeError('Variable "studentMeetings" does not exist.', 83, $this->source); })())) && twig_test_empty((isset($context["tutorMeetings"]) || array_key_exists("tutorMeetings", $context) ? $context["tutorMeetings"] : (function () { throw new RuntimeError('Variable "tutorMeetings" does not exist.', 83, $this->source); })())))) {
            // line 84
            echo "                        <p>Aucune rencontre</p>
                    ";
        }
        // line 86
        echo "                </div>
            </fieldset>
        </div>
    </div>
    <button id=\"editButton\" type=\"button\" class=\"btn btn-light\">Modifier</button>
    <div id=\"editButtons\" hidden>
        <button id=\"cancelButton\" type=\"button\" class=\"btn btn-danger\">Annuler</button>
        <button type=\"submit\" class=\"btn btn-primary\">Sauvegarder</button>
    </div>
    ";
        // line 95
        echo         $this->env->getRuntime('Symfony\Component\Form\FormRenderer')->renderBlock((isset($context["form"]) || array_key_exists("form", $context) ? $context["form"] : (function () { throw new RuntimeError('Variable "form" does not exist.', 95, $this->source); })()), 'form_end');
        echo "
    ";
        // line 96
        $this->loadTemplate("footer.html.twig", "user/profile.html.twig", 96)->display($context);
        // line 97
        echo "    <!--===================== JavaScript =====================-->
    <script>
        let editButton = document.getElementById('editButton');
        let inputs = document.querySelectorAll('input, select');
        let editDiv = document.getElementById('editButtons');
        editButton.addEventListener('click', function()
        {
            for (let input of inputs) 
            {
                input.removeAttribute('disabled');
                editButton.setAttribute('hidden', '');

                editDiv.removeAttribute('hidden');
            }
        });

        let cancelbutton = document.getElementById('cancelButton');
        cancelButton.addEventListener('click', function()
        {
            for (let input of inputs) 
            {
                input.setAttribute('disabled', '');
                editButton.removeAttribute('hidden');

                editDiv.setAttribute('hidden', '');
            }
        });
    </script>
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    public function getTemplateName()
    {
        return "user/profile.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  287 => 97,  285 => 96,  281 => 95,  270 => 86,  266 => 84,  263 => 83,  248 => 81,  243 => 80,  228 => 78,  224 => 77,  215 => 71,  211 => 70,  207 => 68,  203 => 66,  197 => 64,  195 => 63,  187 => 58,  183 => 57,  179 => 56,  172 => 52,  168 => 51,  164 => 50,  160 => 49,  156 => 48,  148 => 43,  145 => 42,  143 => 41,  121 => 21,  111 => 20,  92 => 18,  70 => 2,  60 => 1,  37 => 16,);
    }

    public function getSourceContext()
    {
        return new Source("{% block header %}
<!--****************************************
 Fichier : profile.html.twig
 Auteur : Jean-Nyckolas Roy
 Fonctionnalité : A3
 Date : 2022-04-26
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 2022-04-26 - Jean-Nyckolas - Affichage de base et ajout des filtres
 =========================================================
****************************************-->
{% endblock %}

{% extends 'base.html.twig' %}

{% block title %}Profil{% endblock %}

{% block body %}
    <style>
        .imageProfil
        {
            object-fit: cover;
            width: 175pt;
            height: 175pt;
            border: solid 1px;
        }
        
        #meetings
        {
            flex-grow: 1;
        }
        #meetings div
        {
            height: 200pt;
            overflow-wrap: break-word;
            overflow-y: scroll;
        }
    </style>
    {% include 'header.html.twig' %}
    <h1>Profil</h1>
    {{ form_start(form) }}
    <div id=\"profileForm\" class=\"flex-row wrap\">
        <div class=\"flex-column col-5\">
            <fieldset>
                <legend>Informations générales</legend>
                {{ form_row(form.email, { 'attr':{'disabled':'disabled'} }) }}
                {{ form_row(form.firstName, { 'attr':{'disabled':'disabled'} }) }}
                {{ form_row(form.lastName, { 'attr':{'disabled':'disabled'} }) }}
                {{ form_row(form.phone, { 'attr':{'disabled':'disabled'} }) }}
                {{ form_row(form.birthdate, { 'attr':{'disabled':'disabled'} }) }}
            </fieldset>
            <fieldset>
                <legend>Informations académiques</legend>
                {{ form_row(form.institution, { 'attr':{'disabled':'disabled'} }) }}
                {{ form_row(form.field, { 'attr':{'disabled':'disabled'} }) }}
                {{ form_row(form.masteredSubject, { 'attr':{'disabled':'disabled'} }) }}
            </fieldset>
        </div>
        <div class=\"flex-column col-5 right\">
            <div class=\"flex-row wrap\">
                {% if user.image %}
                    <img class=\"auto imageProfil\" alt=\"Image profil\" src=\"data:image/png;base64,{{ image }}\"></img>
                {% else %}
                    <img class=\"auto imageProfil\"/>
                {% endif %}
                <fieldset class=\"flex-column col-12 height-fit\">
                    <legend>Compte</legend>
                    {{ form_row(form.role, { 'attr':{'disabled':'disabled'} }) }}
                    {{ form_row(form.validAccount, { 'attr':{'disabled':'disabled'} }) }}
                </fieldset>
            </div>
            <fieldset id=\"meetings\">
                <legend>Rencontres</legend>
                <div>
                    {% for meeting in studentMeetings %}
                        <p>{{ meeting.date|date('Y-m-d') }} en tant qu'étudiant avec <a href=\"/profile/{{meeting.tutor.id}}\">{{meeting.tutor.firstName}} {{meeting.tutor.lastName}}</a></p>
                    {% endfor %}
                    {% for meeting in tutorMeetings %}
                        <p>{{ meeting.date|date('Y-m-d') }} en tant que tuteur avec <a href=\"/profile/{{meeting.student.id}}\">{{meeting.student.firstName}} {{meeting.student.lastName}}</a></p>
                    {% endfor %}
                    {% if studentMeetings is empty and tutorMeetings is empty %}
                        <p>Aucune rencontre</p>
                    {% endif %}
                </div>
            </fieldset>
        </div>
    </div>
    <button id=\"editButton\" type=\"button\" class=\"btn btn-light\">Modifier</button>
    <div id=\"editButtons\" hidden>
        <button id=\"cancelButton\" type=\"button\" class=\"btn btn-danger\">Annuler</button>
        <button type=\"submit\" class=\"btn btn-primary\">Sauvegarder</button>
    </div>
    {{ form_end(form) }}
    {% include 'footer.html.twig' %}
    <!--===================== JavaScript =====================-->
    <script>
        let editButton = document.getElementById('editButton');
        let inputs = document.querySelectorAll('input, select');
        let editDiv = document.getElementById('editButtons');
        editButton.addEventListener('click', function()
        {
            for (let input of inputs) 
            {
                input.removeAttribute('disabled');
                editButton.setAttribute('hidden', '');

                editDiv.removeAttribute('hidden');
            }
        });

        let cancelbutton = document.getElementById('cancelButton');
        cancelButton.addEventListener('click', function()
        {
            for (let input of inputs) 
            {
                input.setAttribute('disabled', '');
                editButton.removeAttribute('hidden');

                editDiv.setAttribute('hidden', '');
            }
        });
    </script>
{% endblock %}", "user/profile.html.twig", "C:\\xampp\\htdocs\\projetWebTuteur\\templates\\user\\profile.html.twig");
    }
}
